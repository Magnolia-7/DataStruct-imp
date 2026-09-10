#include "../common.h"
#include "doublylink.h"
// Task 16: insert.
// TODO: Implement this exercise yourself.

bool DListInsert(DLinkList &L, int i, ElemType e){
    if(i < 1) return false;
    DLNode *p = L;
    int j = 1;
   while(p && j < i){
        j++;
        p = p->next;
    }
    if(!p) return false;
    DLNode *q = new DLNode;
    if(!q) return false;

    q ->data = e;
    q ->next = p->next;
    if(q->next != nullptr){
        p->next->prior = q;
    }
    q->prior = p;
    p->next = q;
    return true;
}