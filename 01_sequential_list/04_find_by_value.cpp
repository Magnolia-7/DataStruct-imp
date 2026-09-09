#include "../common.h"
#include "seqlist.h"
// Task 04: find by value.
// TODO: Implement this exercise yourself.
int LocateElem(const SqList &L, ElemType e){
    for(int i = 1; i <= L.length; i++){
        if(L.elem[i - 1] == e) return i;
    }
    return 0;
}
