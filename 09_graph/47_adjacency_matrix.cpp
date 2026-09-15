#include "graph.h"
using namespace std;
// Task 47: adjacency matrix.
// TODO: Implement this exercise yourself.

int LocateVex(AMGraph G, VerTexType V){
    for(int i=0; i < G.vexnum; i++){
        if(G.vexs[i] == V) return i;
    }
    return -1;
}

bool CreateUDN(AMGraph &G){
    cin>> G.vexnum >> G.arcnum;
    for(int i=0; i<G.vexnum; i++){
        cin>>G.vexs[i];
    }
    for(int i=0; i<G.vexnum;i++){
        for(int j=0; j<G.vexnum; j++){
            G.arcs[i][j]=MAXINT;
        }
    }
    // for(int i=0; i<G.vexnum; i++){
    //     G.arcs[i][i] = 0;
    // }如果有把对角线初始化为0加这个
    for(int k=0; k<G.arcnum; k++){
        VerTexType v1, v2;
        int w = 0;
        cin>>v1>>v2>>w;
        int i = LocateVex(G, v1);
        int j = LocateVex(G, v2);
        if(i == -1 || j == -1) return false;
        G.arcs[i][j] = w;
        G.arcs[j][i] = G.arcs[i][j];
    }
    return true;
}