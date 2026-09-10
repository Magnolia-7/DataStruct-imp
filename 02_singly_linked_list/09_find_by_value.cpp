#include "../common.h"
#include "singlylink.h"
// Task 09: find by value.
// TODO: Implement this exercise yourself.

LNode* LocateElem(LinkList L, ElemType e){
    LNode *p = L->next;
    while (p != nullptr && p->data !=e)
    {
        p = p->next;
    }
    return p;
}


int LocateElemPos(LinkList L, ElemType e){
    LNode *p = L->next;
    int cnt = 1; // 第一个数据节点是1 
    while(p != nullptr && p->data !=e){
        p = p->next;
        cnt++;
    }
    if(!p) return 0;
    return cnt;
}