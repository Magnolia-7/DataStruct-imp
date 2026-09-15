#include "graph.h"
using namespace std;
// Task 49: depth first search.
// TODO: Implement this exercise yourself.
bool visit[MAXVEX];
void InitVisit(bool visit[]){
    for(int i = 0; i < MAXVEX ; i++){
        visit[i] = false;
    }
}
//：怎么找？
//邻接矩阵: 1.从给定节点出发；2.在边数组找一个点（判断权不为MAXINT，依据visit判断是否访问）然后把这一点的visit变为True；
//再从这一节点出发重复2步骤。


void DFS(AMGraph G, int v){
    cout << G.vexs[v] << " ";
    visit[v] = true;
    for(int j = 0; j < G.vexnum; j++){
        if(G.arcs[v][j] != MAXINT && !visit[j]){
            DFS(G, j);
        }
    }
}

void DFS(ALGraph G, int v){
    cout << G.vertices[v].data << " ";
    visit[v] = true;
    ArcNode *p = G.vertices[v].firstarc;
    while(p){
        int w = p->adjvex;
        if(!visit[w])
            DFS(G, w);
        p = p->nextarc;
    }
}

