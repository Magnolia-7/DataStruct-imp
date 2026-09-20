#include "sort.h"
extern RedType S[MAXSIZE];

void Merge(RedType R[], RedType T[], int low, int mid, int high){
    int i = low; int j = mid + 1; int k = low;
    while(i <= mid && j <= high){
        if(R[i].key <= R[j].key) T[k++] = R[i++];
        else T[k++] = R[j++];
    }
    while(i <= mid) T[k++] = R[i++];
    while(j <= high) T[k++] = R[j++];
}

void MSort(RedType R[], RedType T[], int low, int high){
    if(low == high) T[low] = R[low];
    if(low < high){
        int mid = low + (high - low) / 2;
        MSort(R, S, low, mid);
        MSort(R, S, mid + 1, high);
        Merge(S, T, low, mid, high);
    }
}

void MergeSort(SqList &L){
    MSort(L.r, L.r, 1, L.length);
}
