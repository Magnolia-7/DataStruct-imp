#include "stack.h"
#include "../common.h"
using namespace std;

void TestSqStack()
{
    cout << "===== 测试顺序栈 SqStack =====" << endl;
    SqStack S;
    ElemType e;
    if(InitStack(S)){
        cout << "顺序栈初始化成功" << endl;
    }

    //入栈
    Push(S,10);
    Push(S,20);
    Push(S,30);
    cout << "入栈 10,20,30" << endl;

    //取栈顶
    if(GetTop(S,e)){
        cout << "栈顶元素：" << e << endl;
    }

    //出栈
    if(Pop(S,e)){
        cout << "出栈元素：" << e << endl;
    }
    if(Pop(S,e)){
        cout << "出栈元素：" << e << endl;
    }
    if(Pop(S,e)){
        cout << "出栈元素：" << e << endl;
    }
    //空栈尝试出栈
    if(!Pop(S,e)){
        cout << "栈空，出栈失败" << endl;
    }
    cout << endl;
}

void TestLinkStack()
{
    cout << "===== 测试链栈 LinkStack =====" << endl;
    LinkStack S = nullptr;
    ElemType e;

    Push(S,100);
    Push(S,200);
    Push(S,300);
    cout << "链栈入栈100,200,300" << endl;

    if(Pop(S,e)){
        cout << "出栈元素：" << e << endl;
    }
    if(Pop(S,e)){
        cout << "出栈元素：" << e << endl;
    }
    if(Pop(S,e)){
        cout << "出栈元素：" << e << endl;
    }
    if(!Pop(S,e)){
        cout << "链栈空，出栈失败" << endl;
    }
    cout << endl;
}

int main()
{
    TestSqStack();
    TestLinkStack();
    return 0;
}
