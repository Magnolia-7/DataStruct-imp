#include "bt.h"
using namespace std;
// Task 39: preorder recursive.
// TODO: Implement this exercise yourself.

void PreOrder(BiTree T){
    if(!T){
        cout << T->data << endl;
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}