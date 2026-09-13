#include "../common.h"
#include "../04_stack/stack.h"
#include <string>
using namespace std;
// Task 32: infix to postfix.
// TODO: Implement this exercise yourself.

int getPriority(char c){
    if(c == '+' || c == '-') return 1;
    else if(c == '*' || c == '/') return 2;
    else return 0;
}

string infixToPostifix(const string &infix){
    SqStack S;
    InitStack(S);
    ElemType e;
    string postifix;

    for(char c : infix){
        if(c >= '0' && c <= '9'){
            postifix += c;
        }
        else if(c == '('){
            Push(S, c);
        }
        else if(c == ')'){
            while(GetTop(S, e) && e != '('){
                postifix += char(e);
                Pop(S, e);
            }
            Pop(S, e);
        }else if(c == '+' || c == '-' || c == '*' || c == '/'){
            while(GetTop(S, e) && getPriority(e) >= getPriority(c)){
                postifix += char(e);
                Pop(S, e);
            }
            Push(S, c);
        }
    }
    while(GetTop(S, e)){
            postifix += char(e);
            Pop(S, e);
    }
    return postifix;
}

int main(){
    string exp;
    cin >> exp;
    cout << exp << "->" << infixToPostifix(exp) << endl;
    return 0; 
}