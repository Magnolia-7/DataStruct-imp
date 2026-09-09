#include "../common.h"
#include "seqlist.h"

// 辅助：打印整个顺序表
void PrintSqList(const SqList &L)
{
    std::cout << "顺序表元素：";
    for (int i = 0; i < L.length; ++i)
    {
        std::cout << L.elem[i] << " ";
    }
    std::cout << "\n表长 = " << GetLength(L) << "\n\n";
}

int main()
{
    SqList L;
    ElemType e;

    // Task01 初始化
    if (!InitSqList(L))
    {
        std::cerr << "顺序表初始化失败！\n";
        return -1;
    }
    std::cout << "✅ 初始化完成\n";
    PrintSqList(L);

    // Task05 插入测试
    ListInsert(L, 1, 10);
    ListInsert(L, 2, 20);
    ListInsert(L, 3, 30);
    std::cout << "✅ 在1,2,3位序插入10,20,30\n";
    PrintSqList(L);

    // Task03 按位查找
    if (GetElem(L, 2, e))
    {
        std::cout << "✅ 位序2的元素 = " << e << "\n\n";
    }
    else
    {
        std::cout << "❌ 查找失败\n\n";
    }

    // Task04 按值查找
    int pos = LocateElem(L, 20);
    if (pos != 0)
    {
        std::cout << "✅ 值20所在位序 = " << pos << "\n\n";
    }
    else
    {
        std::cout << "❌ 未找到该值\n\n";
    }

    // Task06 删除测试
    if (ListDelete(L, 2, e))
    {
        std::cout << "✅ 删除位序2，被删元素 = " << e << "\n";
        PrintSqList(L);
    }
    else
    {
        std::cout << "❌ 删除失败\n";
    }
}
