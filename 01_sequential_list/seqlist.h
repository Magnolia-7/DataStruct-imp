#ifndef SEQLIST_H
#define SEQLIST_H
#include "../common.h"

typedef struct{
    ElemType *elem;
    int length;
} SqList;

bool InitSqList(SqList &L);
int GetLength(const SqList &L);
bool GetElem(const SqList &L, int i, ElemType &e);
int LocateElem(const SqList &L, ElemType e);
bool ListInsert(SqList &L, int i, ElemType e);
bool ListDelete(SqList &L, int i, ElemType &e);
void DestroySqList(SqList &L);

#endif // SEQLIST_H
