#include "../09_graph/graph.h"
using namespace std;
// Task 51: prim.
// TODO: Implement this exercise yourself.

typedef struct{
    VerTexType adjvex;
    ArcType lowcost;
}closedge[MAXVEX];


int Min(closedge close, int vexnum){
    int k = -1;
    int minw = MAXINT;
    for(int j = 0; j < vexnum; j++){
        if(close[j].lowcost != 0 && close[j].lowcost < minw){
            minw = close[j].lowcost;
            k = j;
        }
    }
    return k;
}


void MiniSpanTree_Prim(AMGraph G, VerTexType u){
    int k = LocateVex(G, u);
    closedge close;
    close[k].lowcost = 0;
    for(int j = 0; j < G.vexnum; j++){
        if(j != k) close[j] = {u, G.arcs[k][j]};
    }
    for(int i = 1; i < G.vexnum; i++){
        k = Min(close, G.vexnum);
        VerTexType u0 = close[k].adjvex;
        VerTexType v0 = G.vexs[k];
        cout << u0 << "->" << v0 << " ";
        close[k].lowcost = 0;
        for(int j = 0; j < G.vexnum; j++){
            if(close[j].lowcost != 0 && close[j].lowcost > G.arcs[k][j]){
                close[j] = {G.vexs[k], G.arcs[k][j]};
            }
        }
    }
}
   
