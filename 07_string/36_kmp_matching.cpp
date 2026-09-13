#include "../common.h"
#include "string.h"
// Task 36: kmp matching.
// TODO: Implement this exercise yourself.

int KMPMatch(SString S, SString T, int next[]){
    int i = 1, j = 1;
    while(i <= S.length && j <= T.length){
        if(j == 0 || S.ch[i] == T.ch[j]){
            i++;
            j++;
        }else{
            j = next[j];
        }
    }
    if(j > T.length) return i - T.length;
    else return 0;
}