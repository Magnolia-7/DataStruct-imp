#include "../common.h"
#include "queue.h"
// Task 24: circular queue initialize.
// TODO: Implement this exercise yourself.
bool InitQueue(SqQueue &Q){
    Q.base = new ElemType[MAXSIZE];
    if(!Q.base) return false;
    Q.rear = Q.front = 0;
    return true;
}

bool InitQueue(LinkQueue &Q){
    Q.front = Q.rear = new QNode;
    if(!Q.front ) return false;
    Q.rear->next = nullptr;
    return true;
}