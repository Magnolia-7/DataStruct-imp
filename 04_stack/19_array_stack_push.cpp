#include "../common.h"
#include "stack.h"
// Task 19: array stack push.
// TODO: Implement this exercise yourself.
bool Push(SqStack &S, ElemType e){
    if((S.top-S.base) == 0) return false;
    *(S.top) = e;
    ++(S.top);
    return true;
}
