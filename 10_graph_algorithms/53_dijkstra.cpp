#include "../09_graph/graph.h"
using namespace std;


void Dijkstra(AMGraph G, int v0){
    //1.创建两个数组S[]是否已经处理完， dist[]存出发点当前所有路径中到某点的最短距离，并初始化（需完成对起始点的距离初始化）
    ArcType dist[MAXVEX];
    bool S[MAXVEX];
    for(int i = 0; i < G.vexnum; i++){
        S[i] = false;
        dist[i] = MAXINT;
    }
    S[v0] = true;
    dist[v0] = 0;
    //2需要搜索n - 1次，每次加入一个dist[]中的最短点
    for(int i = 1; i < G.vexnum; i++){
        int u = -1;
        ArcType minw = MAXINT;
        for(int j = 0; j < G.vexnum; j++){
            if(!S[j] && dist[j] < minw){
                minw = dist[j];
                u = j;
            }
        }
        if(u == -1) break;
        S[u] = true;
        //3.从这个最短点出发，看是否能够使出发点到其他点的距离减少，并更新对应的dist数组
        for(int v = 0; v < G.vexnum; v++){
            if(!S[v] && G.arcs[u][v] != MAXINT && dist[u] + G.arcs[u][v] < dist[v]){
                dist[v] = dist[u] + G.arcs[u][v];
            }
        }
    }

    cout << "起点到各点的最短距离" << " ";
    for(int i = 0; i < G.vexnum; i++){
        if(dist[i] == MAXINT){
            cout << "到" << G.vexs[i] << "不可达" << " ";
        }else{
            cout << "到" << G.vexs[i] << "最短距离为" << dist[i] << " ";
        }
    }
}