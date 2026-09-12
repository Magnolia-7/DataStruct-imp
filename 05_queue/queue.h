#ifndef QUEUE_H
#define QUEUE_H
#include "../common.h"

typedef struct SqQueue{
    ElemType *base;
    int front;
    int rear;
}SqQueue;

bool InitQueue(SqQueue &Q);
bool IsEmpty(SqQueue Q);
bool IsFull(SqQueue Q);
bool EnQueue(SqQueue &Q, ElemType e);  
bool DeQueue(SqQueue &Q, ElemType &e); 

typedef struct QNode{
    ElemType data;
    struct QNode *next;
}QNode;

typedef struct{
    QNode *front;
    QNode *rear;
}LinkQueue;

bool InitQueue(LinkQueue &Q);
bool EnQueue(LinkQueue &Q, ElemType e);
bool DeQueue(LinkQueue &Q, ElemType &e);
#endif