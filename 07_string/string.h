#ifndef STRING_H
#define STRING_H
#define MAXSTRLEN 255
typedef struct{
    char ch[MAXSTRLEN];
    int length;
}SString;

inline bool InitString(SString &str){
    str.length = 0;
    return true;
};

inline bool StrAssign(SString &str, const char *cstr)
{
    str.length = 0;
    int i = 0;
    while(cstr[i] != '\0')
    {
        if(str.length + 1 > MAXSTRLEN)
        {
            return false;
        }
        str.ch[str.length + 1] = cstr[i];
        str.length++;
        i++;
    }
    return true;
}


//34 暴力朴素串匹配
int BruteForceMatch(SString S, SString T);
//35 生成KMP next数组
void GetNext(SString T, int next[]);
//36 KMP匹配主函数
int KMPMatch(SString S, SString T, int next[]);
#endif