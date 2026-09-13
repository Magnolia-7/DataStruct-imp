#include "../common.h"
#include "../04_stack/stack.h"
using namespace std;
// Task 31: bracket matching.
// TODO: Implement this exercise yourself.
bool BracketMatch(const string &str){
    SqStack S;
    ElemType e;

    InitStack(S);
    for(char ch: str){
        if(ch == '(' || ch == '[' || ch == '{'){
            Push(S, ch);
        }
        else if(ch == ')' || ch == ']' || ch == '}'){
            if(!GetTop(S, e)){
                return false;
            }
            if( (ch == ')' && e == '(') ||
                (ch == ']' && e == '[') ||
                (ch == '}' && e == '{') )
            {
                Pop(S, e);
            }
            else
            {
                return false;
            }
        }
    }
    return !GetTop(S, e);
}

int main(){
    string test1 = "{[()]}";
    string test2 = "{[(])}";
    string test3 = "{}()";
    string test4 = "";
    cout << test1 << " : " << boolalpha << BracketMatch(test1) << endl;
    cout << test2 << " : " << BracketMatch(test2) << endl;
    cout << test3 << " : " << BracketMatch(test3) << endl;
    cout << test4 << " : " << BracketMatch(test4) << endl;
    return 0;
}

