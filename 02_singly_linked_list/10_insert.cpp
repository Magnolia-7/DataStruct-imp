#include "../common.h"
#include "singlylink.h"

// Task 10: insert.
// TODO: Implement this exercise yourself.
bool ListInsert(LinkList &L, int i, ElemType e){
    if(i < 1) return false;
    LNode *p = L;
    int j = 1;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    if(!p) return false;
    LNode *q = new LNode;
    q->data = e;

    q ->next = p->next;
    p->next = q;
    return true;
}