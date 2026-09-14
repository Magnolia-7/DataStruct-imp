#include "bt.h"
using namespace std;

void PostOrder(BiTree T){
    if(!T){
        PreOrder(T->lchild);
        PreOrder(T->rchild);
        cout << T->data << endl;
    }
}