#include "bt.h"
using namespace std;

int main()
{
    BiTree T;
    cout << "=== 先序创建二叉树，# 表示空结点 ===\n";
    cout << "示例输入：A B # # C # #\n";
    CreateBiTree(T);

    cout << "\n【39】先序递归遍历：";
    PreOrder(T);

    cout << "\n【40】中序递归遍历：";
    InOrder(T);

    cout << "\n【41】后序递归遍历：";
    PostOrder(T);

    cout << "\n【42】先序迭代(栈)：";
    PreOrderIter(T);

    cout << "\n【43】中序迭代(栈)：";
    InOrderIter(T);

    cout << "\n【44】层序遍历(队列)：";
    LevelOrder(T);

    cout << "\n【45】二叉树高度 = " << GetHeight(T);
    cout << "\n【46】叶子结点数 = " << CountLeaves(T);
    cout << endl;

    return 0;
}
