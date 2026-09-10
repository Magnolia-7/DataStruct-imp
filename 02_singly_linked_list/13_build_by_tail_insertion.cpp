#include "../common.h"
#include "singlylink.h"
// Task 13: build by tail insertion.
// TODO: Implement this exercise yourself.
void List_TailInsert(LinkList &L, ElemType arr[], int n){
    LNode *r = L;
    // while (r->next){
    //     r = r->next;
    // }
    for(int i = 0; i < n; i++){
        LNode *p = new LNode;
        p->data = arr[i];
        p->next = nullptr;
        r->next = p;
        r = p;
    }
}

void CreatListTail(LinkList &L,const int n){
    LNode *r = L;
    for(int i = 0; i < n; i++){
        LNode *p = new LNode;
        std::cin >> p->data;
        p->next = nullptr;
        r->next = p;
        r = p;
    }
}