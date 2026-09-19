#include "../09_graph/graph.h"
using namespace std;

void Floyd(AMGraph G){
    //1.创建一个二维数组，维护一点到另一点的最短路径；
    //1.1 初始化这个二维数组
    ArcType dist[MAXVEX][MAXVEX];
    for(int i = 0; i < G.vexnum; i ++){
        for(int j = 0; j < G.vexnum; j++){
            if(i == j)
                dist[i][j] = 0;
            else
                dist[i][j] = G.arcs[i][j];
        }
    }

    for(int k = 0; k < G.vexnum; k++){
        for(int i = 0; i < G.vexnum; i++){
            for(int j = 0; j < G.vexnum; j++){
                if(dist[i][k] != MAXINT && dist[k][j] != MAXINT){
                    if(dist[i][k] + dist[k][j] < dist[i][j]){
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }
    }
    cout << "最短距离矩阵："<<endl;
    for(int i=0;i<G.vexnum;i++){
        for(int j=0;j<G.vexnum;j++){
            if(dist[i][j]==MAXINT)
                cout<<"∞ ";
            else
                cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}

