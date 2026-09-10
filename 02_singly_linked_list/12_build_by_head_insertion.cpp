#include "../common.h"
#include "singlylink.h"
// Task 12: build by head insertion.
// TODO: Implement this exercise yourself.

void List_HeadInsert(LinkList &L, ElemType arr[], int n){
    for(int i = 0; i < n; i++){
        LNode *p = new LNode;
        p->data = arr[i];
        p->next = L->next;
        L->next = p;
    }
}

void CreatListHead(LinkList &L, const int n){
    for(int i = 0; i < n; i++){
        LNode *p = new LNode;
        std::cin >> p->data;
        p->next = L->next;
        L->next = p;
    }
}