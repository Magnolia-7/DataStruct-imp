#include "../common.h"
#include "singlylink.h"

int main(){
    LinkList L;
    InitList(L);
    std::cout << "链表初始化" << std::endl;

    ElemType arr[] = {10, 20, 30};
    int n = 3;
    List_TailInsert(L, arr, n);
    TraverseList(L);

    ElemType e;
    bool ret = GetElem(L, 2, e);
    std::cout << "GetElem i=2:" << (ret ? "成功，值=" : "失败") << e << "\n";
    ret = GetElem(L, 5, e);
    std::cout << "GetElem i=5:" << (ret ? "成功" : "失败") << "\n\n";

    // LocateElem 按值查找，返回结点指针
    LNode* findNode = LocateElem(L, 20);
    if(findNode)
        std::cout << "LocateElem 找到20\n";
    else
        std::cout << "LocateElem 未找到20\n";
    // LocateElemPos 返回位序
    int pos = LocateElemPos(L, 30);
    std::cout << "LocateElemPos 30 的位序=" << pos << "\n\n";

    std::cout << "【在i=2插入99】\n";
    ListInsert(L, 2, 99);
    TraverseList(L);

    //7. ListDelete 删除第3个元素
    std::cout << "【删除i=3】\n";
    ret = ListDelete(L,3,e);
    if(ret)
        std::cout << "被删除元素：" << e << "\n";
    TraverseList(L);

    // ===== 测试头插法（新建一条链表测试）=====
    std::cout << "===== 新建链表，头插 arr={1,2,3} =====\n";
    LinkList L2;
    InitList(L2);
    ElemType arr2[] = {1,2,3};
    List_HeadInsert(L2, arr2, 3);
    std::cout << "头插结果（逆序）：\n";
    TraverseList(L2);

    return 0;
}
