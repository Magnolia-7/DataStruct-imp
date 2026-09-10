#ifndef DOUBLELINK_H
#define DOUBLELINK_H
#include "../common.h"

typedef struct DLNode{
    ElemType data;
    struct DLNode *prior;
    struct DLNode *next;
}DLNode, *DLinkList;

bool InitDList(DLinkList &L);
bool DListInsert(DLinkList &L, int i, ElemType e);
bool DListDelete(DLinkList &L, int i, ElemType &e);
#endif
