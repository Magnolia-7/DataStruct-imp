#include "../common.h"
#include "queue.h"
// Task 25: circular queue is empty.
// TODO: Implement this exercise yourself.

bool IsEmpty(SqQueue Q){
    if(Q.front == Q.rear) 
        return true;
    else{
        return false;
    }
}
