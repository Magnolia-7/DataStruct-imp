#include "../common.h"
#include "stack.h"
// Task 18: array stack initialize.
// TODO: Implement this exercise yourself.

bool InitStack(SqStack &S){
    S.base = new ElemType[MAXSIZE];
    if(!S.base) return false;
    S.stacksize = MAXSIZE;
    S.top = S.base;
    return true;
}

bool InitStack(LinkStack &S){
  S = new StackNode;
  if(!S) return false;
  S = nullptr;
  return true;  
}