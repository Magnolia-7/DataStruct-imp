#include "sort.h"

int Partition(SqList &L, int low, int high){
    L.r[0] = L.r[low];
    int pivotkey = L.r[low].key;
    while(low < high){
        while(low < high && L.r[high].key > pivotkey) high--;
        L.r[low] = L.r[high];
        while(low < high && L.r[low].key < pivotkey) low++;
        L.r[high] = L.r[low];
    }
    L.r[low] = L.r[0];
    return low;
}

void QSort(SqList &L, int low, int high){
    if(low < high){
        int privotkey = Partition(L, low, high);
        QSort(L, low, privotkey - 1);
        QSort(L, privotkey + 1, high);
    }
}

void QuickSort(SqList &L){
    QSort(L, 1, L.length);
}
