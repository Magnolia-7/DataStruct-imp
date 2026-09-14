#include "bt.h"
#include <stack>
using namespace std;

// Task 43: inorder iterative.
// TODO: Implement this exercise yourself.

void InOrderIter(BiTree T){
    if(T==nullptr)return;
    stack<BiTNode*> st;
    BiTNode *p = T;
    while(p != nullptr || !st.empty()){
        while(p != nullptr){
            st.push(p);
            p = p->lchild;
        }
        p = st.top();
        cout << p->data << " ";
        st.pop();
        p = p->rchild;
    }
}