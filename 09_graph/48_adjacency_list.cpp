#include "graph.h"
using namespace std;
// Task 48: adjacency list.
// TODO: Implement this exercise yourself.

int LocateVex(ALGraph G, VerTexType V){
    for(int i = 0; i < G.vexnum; i++){
        if(G.vertices[i].data == V)
            return i;
    }
    return -1;
}

bool CreateUDG(ALGraph &G){
    cin >> G.vexnum >> G.arcnum;
    for(int i = 0; i < G.vexnum; i++){
        cin >> G.vertices[i].data;
        G.vertices[i].firstarc = nullptr;
    }
    for(int k = 0; k < G.arcnum; k++){
        VerTexType v1, v2;
        cin >> v1 >> v2;
        int i = LocateVex(G, v1);
        int j = LocateVex(G, v2);
        if(i == -1 || j == -1)
            return false;
        ArcNode *p1 = new ArcNode;
        p1->adjvex = j;
        p1->nextarc = G.vertices[i].firstarc;
        G.vertices[i].firstarc = p1;

        ArcNode *p2 = new ArcNode;
        p2->adjvex = i;
        p2->nextarc = G.vertices[j].firstarc;
        G.vertices[j].firstarc = p2;
    }
    return true;
}
