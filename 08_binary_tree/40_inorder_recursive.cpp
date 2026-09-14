#include "bt.h"
using namespace std;


void InOrder(BiTree T){
    if(!T){
        PreOrder(T->lchild);
        cout << T->data << endl;
        PreOrder(T->rchild);
    }
}