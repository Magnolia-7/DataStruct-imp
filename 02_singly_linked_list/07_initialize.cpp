#include "../common.h"
#include "singlylink.h"
// Task 07: initialize.
// TODO: Implement this exercise yourself.


bool InitList(LinkList &L){
    L = new LNode;
    if(!L) return false;
    L->next = nullptr;
    return true;
}
