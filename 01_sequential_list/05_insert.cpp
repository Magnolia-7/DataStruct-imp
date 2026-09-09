#include "../common.h"
#include "seqlist.h"
// Task 05: insert.
// TODO: Implement this exercise yourself.
bool ListInsert(SqList &L, int i, ElemType e){
    if(i < 1 || i > L.length + 1 || L.length >= MAXSIZE) return false;//可以插在表尾
    for(int j = L.length;j >= i; j--){
        L.elem[j] = L.elem[j - 1];
    }
        L.elem[i - 1] = e;
        L.length++;
        return true;
}
