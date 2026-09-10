#include "../common.h"
#include "singlylink.h"
// Task 14: traverse.
// TODO: Implement this exercise yourself.

void TraverseList(LinkList L){
    LNode *p = L->next;
    while (p){
        std::cout << p->data << std::endl;
        p = p->next;
    }
}