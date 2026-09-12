#include "../common.h"
#include "stack.h"
// Task 21: array stack top.
// TODO: Implement this exercise yourself.

bool GetTop(SqStack S, ElemType &e){
    if(S.top == S.base) return false;
    e = *(S.top - 1);
    return true;
}
