#include "../common.h"
#include "stack.h"
// Task 20: array stack pop.
// TODO: Implement this exercise yourself.

bool Pop(SqStack &S, ElemType &e){
    if(S.base == S.top) return false;
    e = *(--S.top);
    return true;
}
