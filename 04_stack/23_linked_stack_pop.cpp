#include "../common.h"
#include "stack.h"
// Task 23: linked stack pop.
// TODO: Implement this exercise yourself.

bool Pop(LinkStack &S, ElemType &e){
    if(!S) return false;
    StackNode *q = S;
    e = S->data;
    S = S->next;
    delete q;
    return true;
}
