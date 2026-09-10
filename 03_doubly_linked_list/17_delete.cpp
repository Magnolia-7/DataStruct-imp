#include "../common.h"
#include "doublylink.h"
// Task 17: delete.
// TODO: Implement this exercise yourself.

bool DListDelete(DLinkList &L, int i, ElemType &e){
    if(i < 1) return false;
    DLNode *p = L;
    int j = 1;
    while(p && j < i){
        p = p->next;
        j++;
    }
    if(p == nullptr || p->next == nullptr) return false;
    DLNode *q = p->next;
    e = q->data;
    p->next = q->next;
    if(q->next){
        q->next->prior = p;
    }
    delete q;
    return true; 
}
