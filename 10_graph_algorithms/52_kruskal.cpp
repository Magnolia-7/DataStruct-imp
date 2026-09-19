#include "../09_graph/graph.h"
#define MAXARC MAXVEX*MAXVEX
using namespace std;

typedef struct{
    VerTexType Head;
    VerTexType Tail;
    ArcType lowcost;
}Edge;

void SortEdge(Edge edge[], int arcnum){
    for(int i = 0; i < arcnum - 1; i++){
        for(int j = 0; j < arcnum - 1 - i; j++){
            if(edge[j].lowcost > edge[j+1].lowcost){
                Edge temp = edge[j];
                edge[j] = edge[j+1];
                edge[j+1] = temp;
            }
        }
    }
}

void MiniSpanTree_Kruskal(AMGraph G){
    int cnt = 0;
    Edge edges[MAXARC];
    int Vexset[MAXVEX];
    
    for(int i = 0; i < G.vexnum; i++){
        for(int j = i+1; j < G.vexnum; j++){ //上三角，无向网不重复存边
            if(G.arcs[i][j] != MAXINT){
                edges[cnt].Head = G.vexs[i];
                edges[cnt].Tail = G.vexs[j];
                edges[cnt].lowcost = G.arcs[i][j];
                cnt++;
            }
        }
    }
    SortEdge(edges, cnt);
    for(int i = 0; i < G.vexnum; i++){
        Vexset[i] = i;
    }
    int count = 0;
    for(int i = 0; i < cnt; i++){
        int v1 = LocateVex(G, edges[i].Head);
        int v2 = LocateVex(G, edges[i].Tail);
        int vs1 = Vexset[v1];
        int vs2 = Vexset[v2];
        if(vs1 != vs2){
            cout << edges[i].Head << "->" << edges[i].Tail << " ";
            for(int j = 0; j < G.vexnum; j++){
                if(Vexset[j] == vs2) Vexset[j] = vs1;
            }
            count ++;
        }
        if(count == G.vexnum - 1){
            break;
        }
    }
}
