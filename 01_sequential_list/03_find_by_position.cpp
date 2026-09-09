#include "../common.h"
#include "seqlist.h"
// Task 03: find by position.

bool GetElem(const SqList &L, int i, ElemType &e){
    if(i < 1 || i > L.length) return false;
    e = L.elem[i - 1];
    return true;
}


