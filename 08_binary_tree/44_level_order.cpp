#include "bt.h"
#include <queue>
using namespace std;
// Task 44: level order.
// TODO: Implement this exercise yourself.

void LevelOrder(BiTree T){
    if(!T) return;
    queue<BiTNode*> Q;
    Q.push(T);
    while(!Q.empty()){
        BiTNode *p = Q.front();
        Q.pop();
        cout<< p->data << " ";
        if(p->lchild)Q.push(p->lchild);
        if(p->rchild)Q.push(p->rchild);
    }
}
