#ifndef STACK_H
#define STACK_H
#include "../common.h"

typedef struct{     
    ElemType *base;     
    ElemType *top;     
    int stacksize; 
}SqStack;

typedef struct StackNode{
    ElemType data;
    struct StackNode *next;
}StackNode, *LinkStack;

bool InitStack(SqStack &S);
bool Push(SqStack &S, ElemType e);
bool Push(LinkStack &S, ElemType e);
bool Pop(SqStack &S, ElemType &e);
bool Pop(LinkStack &S, ElemType &e);
bool GetTop(SqStack S, ElemType &e);


#endif