#include "bt.h"
using namespace std;
// Task 45: get height.
// TODO: Implement this exercise yourself.

int GetHeight(BiTree T){
    if(T == nullptr){
        return 0;
    }
    int lh = GetHeight(T->lchild);
    int rh = GetHeight(T->rchild);
    return max(lh, rh);
}
