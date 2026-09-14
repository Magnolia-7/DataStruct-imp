#ifndef BT_H
#define BT_H
#include <iostream>
using ElemType = char;

typedef struct BiTNode{
    ElemType data;
    struct BiTNode *rchild;
    struct BiTNode *lchild;
}BiTNode, *BiTree;

// Task38 先序递归创建二叉树，#代表空结点
void CreateBiTree(BiTree &T);

// Task39 先序递归遍历
void PreOrder(BiTree T);
// Task40 中序递归遍历
void InOrder(BiTree T);
// Task41 后序递归遍历
void PostOrder(BiTree T);

// Task42 先序迭代遍历(栈非递归)
void PreOrderIter(BiTree T);
// Task43 中序迭代遍历(栈非递归，高频考点)
void InOrderIter(BiTree T);

// Task44 层序遍历（队列BFS）
void LevelOrder(BiTree T);

// Task45 求二叉树高度
int GetHeight(BiTree T);
// Task46 统计叶子结点数量
int CountLeaves(BiTree T);

#endif