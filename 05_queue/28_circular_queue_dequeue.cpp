#include "../common.h"
#include "queue.h"
// Task 28: circular queue dequeue.
// TODO: Implement this exercise yourself.

bool DeQueue(SqQueue &Q, ElemType &e){
    if(IsEmpty(Q)) return false;
    e = Q.base[Q.front];
    Q.front = (Q.front + 1) % MAXSIZE;
    return true;
}
