#include "../common.h"
#include "queue.h"
// Task 26: circular queue is full.
// TODO: Implement this exercise yourself.

bool IsFull(SqQueue Q){
    return (Q.rear+1) % MAXSIZE == Q.front;
}
