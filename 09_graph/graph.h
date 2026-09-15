#ifndef GRAPH_H
#define GRAPH_H
#define MAXINT 32767
#define MAXVEX 100
#include <iostream>
typedef char VerTexType;
typedef int ArcType;
typedef char OtherInfo;

//邻接矩阵无向图
typedef struct AMGraph{
    VerTexType vexs[MAXVEX];
    ArcType arcs[MAXVEX][MAXVEX];
    int vexnum, arcnum;
}AMGraph;



//邻接表无向图
typedef struct ArcNode{
    int adjvex;
    struct ArcNode *nextarc;
    OtherInfo info;
}ArcNode;

typedef struct VNode{
    VerTexType data;
    ArcNode *firstarc;
}VNode, AdjList[MAXVEX];

typedef struct{
    AdjList vertices;
    int vexnum, arcnum;
}ALGraph;

bool CreateUDN(AMGraph &G);
bool CreateUDG(ALGraph &G);
void DFS(AMGraph G, int v);
void DFS(ALGraph G, int v);
void BFS(AMGraph G, int v);
void BFS(ALGraph G, int v);
#endif