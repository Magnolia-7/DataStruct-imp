#include "../common.h"
#include "queue.h"
// Task 30: linked queue dequeue.
// TODO: Implement this exercise yourself.

bool DeQueue(LinkQueue &Q, ElemType &e){
    if(Q.front == Q.rear) return false;
    QNode *p = Q.front->next;
    e = p->data;
    Q.front->next = p->next;
    if(p == Q.rear)
        Q.rear = Q.front;
    delete p;
    return true;
}