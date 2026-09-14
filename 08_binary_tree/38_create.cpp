#include "bt.h"
using namespace std;
// Task 38: create.
// TODO: Implement this exercise yourself.

void CreateBiTree(BiTree &T){
    ElemType ch;
    cin >> ch;
    if(ch == '#'){
        T = nullptr;
    }else{
        T = new BiTNode;
        T->data = ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
}