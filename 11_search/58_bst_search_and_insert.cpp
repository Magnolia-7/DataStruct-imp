#include <iostream>
using KeyType = int;
using InfoType = char;

typedef struct{
    KeyType key;
    InfoType inffo;
}ElemType;

typedef struct BSTNode{
    ElemType data;
    struct BSTNode *lchild;
    struct BSTNode *rchild;
}BSTNode, *BSTree;

BSTree SearchBST(BSTree T, KeyType key){
    if(T == nullptr || T->data.key == key)
        return T;
    else if(T->data.key < key) return SearchBST(T->rchild, key);
    else return SearchBST(T->lchild, key);
}

void InsertBST(BSTree &T, ElemType e){
    if(!T){
        BSTNode *S = new BSTNode;
        S->data = e;
        S->lchild = S->rchild = nullptr;
        T = S;
    }
    else if(T->data.key > e.key)
        InsertBST(T->lchild, e);
    else if(T->data.key < e.key)
        InsertBST(T->rchild, e);
}

void CreateBST(BSTree &T){
    T = nullptr;
    ElemType e;
    std::cin >> e.key;
    while(e.key != -1){
        std::cin >> e.inffo;
        InsertBST(T, e);
        std::cin >> e.key;
    }
}