#include "bt.h"
#include <stack>
using namespace std;
// Task 46: count leaves.
// TODO: Implement this exercise yourself.

int CountLeaves(BiTree T){
    if(!T) return 0;
    if(!T->lchild && !T->rchild)
        return 1;
    int lc = CountLeaves(T->lchild);
    int rc = CountLeaves(T->rchild);
    return lc + rc;
}