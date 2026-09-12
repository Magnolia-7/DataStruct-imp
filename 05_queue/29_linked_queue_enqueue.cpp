#include "../common.h"
#include "queue.h"
// Task 29: linked queue enqueue.
// TODO: Implement this exercise yourself.

bool EnQueue(LinkQueue &Q, ElemType e){
    QNode *p = new QNode;
    if(!p) return false;
    p->data = e;
    Q.rear->next = p;
    Q.rear = p;
    p->next = nullptr;
    return false;
}
