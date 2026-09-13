#include "../common.h"
#include "string.h"
// Task 35: kmp next array.
// TODO: Implement this exercise yourself.

void GetNext(SString T, int next[]){
    next[1] = 0;
    int j = 1, k = 0;
    while(j < T.length){
        if(k == 0 || T.ch[j] == T.ch[k]){
            k++;
            j++;
            next[j] = k;
        }else{
            k = next[k];
        }
    }
}