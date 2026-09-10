#include "../common.h"
#include "singlylink.h"
// Task 11: delete.
// TODO: Implement this exercise yourself.

bool ListDelete(LinkList &L, int i, ElemType &e){
    if(i < 1) return false;
    LNode *p = L;
    int j = 1;
    while(p && j < i){
        p = p->next;
        j++;
    }
    if(!p || p->next == nullptr) return false;
    LNode *q = p->next;
    e = q->data;
    p->next = q->next;
    delete q;
    return true;
}
