#include "../09_graph/graph.h"
#include <queue>
using namespace std;
// Task 55: topological sort.
// TODO: Implement this exercise yourself.

bool TopologicalSort(ALGraph G){
    int inDegree[MAXVEX];
    queue<int> q;
    int count = 0;

    for(int i = 0; i < G.vexnum; i++)
        inDegree[i] = 0;
    
    for(int i = 0; i < G.vexnum; i++){
        ArcNode *p = G.vertices[i].firstarc;
        while(p != nullptr){
            inDegree[p->adjvex]++;
            p = p->nextarc;
        }
    }

    for(int i =0; i < G.vexnum; i++){
        if(inDegree[i] == 0)
            q.push(i);
    }

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << G.vertices[cur].data << " ";
        count++;

        ArcNode *p = G.vertices[cur].firstarc;
        while(p != nullptr){
            int w = p->adjvex;
            inDegree[w]--;
            if(inDegree[w] == 0)
                q.push(w);
            p = p->nextarc;
        }
    }
    if(count == G.vexnum)
        return true;
    else
        return false;
}

//邻接矩阵版