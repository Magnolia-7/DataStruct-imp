#include "../common.h"
#include "singlylink.h"
// Task 08: find by position.
// TODO: Implement this exercise yourself.

bool GetElem(LinkList L, int i, ElemType &e){
    if(i < 1) return false;
    LNode* p = L->next;
    for(int j = 1;p != nullptr && j < i ; j++){
        p = p->next;
    }
    if (p == nullptr) return false;
    e = p->data;
    return true;
}
