#include "../common.h"
#include "queue.h"
// Task 27: circular queue enqueue.
// TODO: Implement this exercise yourself.

bool EnQueue(SqQueue &Q, ElemType e){
    if(IsFull(Q)) return false; 
    Q.base[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MAXSIZE;
    return true;
}