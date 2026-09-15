#include "graph.h"
#include <queue>
using namespace std;
// Task 50: breadth first search.
// TODO: Implement this exercise yourself.

bool visit[MAXVEX];

void BFS(AMGraph G, int v){
    queue<int> q;
    q.push(v);
    visit[v] = true;
    cout << G.vexs[v] << " ";
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int j = 0; j < G.vexnum; j++){
            if(G.arcs[cur][j] != MAXINT && !visit[j]){
                cout << G.vexs[j] << " ";
                visit[j] = true;
                q.push(j);
            }
        }
    }
}

void BFS(ALGraph G, int v){
    queue<int> q;
    q.push(v);
    visit[v] = true;
    cout << G.vertices[v].data << " ";
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        ArcNode *p = G.vertices[cur].firstarc;
        while(p){
            int w = p->adjvex;
            if(!visit[w]){
                cout << G.vertices[w].data << " ";
                q.push(w);
                visit[w] = true;
            }
            p = p->nextarc;
        }
    }
}

