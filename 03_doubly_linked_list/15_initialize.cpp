#include "../common.h"
#include "doublylink.h"
// Task 15: initialize.
// TODO: Implement this exercise yourself.

bool InitDList(DLinkList &L){
    L = new DLNode;
    if(!L) return false;
    L ->next = nullptr;
    L->prior = nullptr;
    return true;
}
