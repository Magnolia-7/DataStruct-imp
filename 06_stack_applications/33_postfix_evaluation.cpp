#include "../common.h"
#include "../04_stack/stack.h"
#include <string>

using namespace std;
// Task 33: postfix evaluation.
// TODO: Implement this exercise yourself.

int CalcPostfix(const string postfix){
    SqStack S;
    InitStack(S);
    ElemType a, b, res;

    for(char c: postfix){
        if(c >= '0' && c <= '9'){
            Push(S, c - '0');
        }else{
            Pop(S, b);
            Pop(S, a);
            switch(c){
                case '+': res = a + b; break;
                case '-': res = a - b; break;
                case '*': res = a * b; break;
                case '/': res = a / b; break;
            }
            Push(S, res);
        }
    }
    GetTop(S, res);
    return res;
}

int main()
{
    string post;
    cin >> post;
    cout << "result = " << CalcPostfix(post) << endl;
    return 0;
}

