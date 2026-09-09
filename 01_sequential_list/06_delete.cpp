#include "../common.h"
#include "seqlist.h"
// Task 06: delete.
// TODO: Implement this exercise yourself.
bool ListDelete(SqList &L, int i, ElemType &e){
    if(i < 1 || i > L.length) return false;
    e = L.elem[i - 1];
    for(int j = i; j < L.length; j++){
        L.elem[j - 1] = L.elem[j];
    }
    L.length --;
    return true;
}
