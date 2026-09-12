#include "../common.h"
#include "stack.h"
// Task 22: linked stack push.
// TODO: Implement this exercise yourself.

bool Push(LinkStack &S, ElemType e){
    StackNode *p = new StackNode;
    if(!p) return false;
    p->data = e;
    p->next = S;
    S = p;
    return true;
}