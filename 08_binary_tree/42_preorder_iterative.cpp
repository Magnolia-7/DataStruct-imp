#include "bt.h"
#include <stack>
using namespace std;
// Task 42: preorder iterative.
// TODO: Implement this exercise yourself.

 void PreOrderIter(BiTree T){
    if(T==nullptr) return;
    stack<BiTNode*> st;
    st.push(T);
    while(!st.empty()){
        BiTNode *p = st.top();
        st.pop();
        cout << p->data << " ";
        if(p->rchild)
            st.push(p->rchild);
        if(p->lchild)
            st.push(p->lchild);
    }
 }