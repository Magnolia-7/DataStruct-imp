#ifndef SINGLYLINK_H
#define SINGLYLINK_H
#include "../common.h"

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;

bool InitList(LinkList &L);                // 07 初始化（带头结点）
bool GetElem(LinkList L, int i, ElemType &e); //08 按位查找
LNode* LocateElem(LinkList L, ElemType e);
int LocateElemPos(LinkList L, ElemType e);    //09 按值查找
bool ListInsert(LinkList &L, int i, ElemType e); //10插入
bool ListDelete(LinkList &L, int i, ElemType &e); //11删除
void List_HeadInsert(LinkList &L, ElemType arr[], int n);
void CreatListHead(LinkList &L, const int n); //12头插建表
void List_TailInsert(LinkList &L, ElemType arr[], int n); 
void CreatListTail(LinkList &L,const int n);//13尾插建表
void TraverseList(LinkList L);

#endif