#include "../common.h"
#include "string.h"
#include <iostream>
using namespace std;
// Task 34: brute force matching.
// TODO: Implement this exercise yourself.
int BruteForceMatch(SString S, SString T){
    int i = 1, j = 1;
    while(i <= S.length && j <= T.length){
        if(S.ch[i] == T.ch[j]){
            i++;
            j++;
        }else{
            i = i - j + 2;
            j = 1;
        }
    }
    if(j > T.length){
        return i - T.length;
    }else return 0;
}

int main()
{
    SString S, T;
    InitString(S);
    InitString(T);
    StrAssign(S, "ababcabcacbab");
    StrAssign(T, "abcac");
    int pos = BruteForceMatch(S, T);
    if(pos != 0)
        cout << "匹配起始位序：" << pos << endl;
    else
        cout << "匹配失败" << endl;
    return 0;
}