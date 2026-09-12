#include "queue.h"
#include <iostream>
using namespace std;

// 测试循环顺序队列（有IsEmpty、IsFull）
void TestSqQueue()
{
    cout << "========== 循环顺序队列 SqQueue ==========" << endl;
    SqQueue Q;
    ElemType e;
    InitQueue(Q);

    cout << "入队 10,20,30" << endl;
    EnQueue(Q,10);
    EnQueue(Q,20);
    EnQueue(Q,30);

    if(DeQueue(Q,e)){
        cout << "出队元素 = " << e << endl;
    }
    if(DeQueue(Q,e)){
        cout << "出队元素 = " << e << endl;
    }

    cout << "入队 40,50" << endl;
    EnQueue(Q,40);
    EnQueue(Q,50);

    cout << "连续全部出队：";
    while(!IsEmpty(Q))
    {
        DeQueue(Q,e);
        cout << e << " ";
    }
    cout << "\n尝试空队列出队：";
    if(!DeQueue(Q,e)){
        cout << "出队失败（队空）" << endl;
    }
    cout << endl;
}

// 测试链队列（没有IsEmpty，直接判断 front == rear）
void TestLinkQueue()
{
    cout << "========== 链队列 LinkQueue ==========" << endl;
    LinkQueue Q;
    ElemType e;
    InitQueue(Q);

    cout << "入队：100,200,300" << endl;
    EnQueue(Q,100);
    EnQueue(Q,200);
    EnQueue(Q,300);

    if(DeQueue(Q,e)){
        cout << "出队元素 = " << e << endl;
    }
    if(DeQueue(Q,e)){
        cout << "出队元素 = " << e << endl;
    }

    cout << "入队 400" << endl;
    EnQueue(Q,400);

    cout << "全部出队：";
    while( !(Q.front == Q.rear) ) //链队列判空：front == rear
    {
        DeQueue(Q,e);
        cout << e << " ";
    }
    cout << "\n尝试空队列出队：";
    if(!DeQueue(Q,e)){
        cout << "出队失败（队空）" << endl;
    }
    cout << endl;
}

int main()
{
    TestSqQueue();
    TestLinkQueue();
    return 0;
}
