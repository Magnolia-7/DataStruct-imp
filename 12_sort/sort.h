#ifndef SORT_H
#define SORT_H

#define MAXSIZE 20
typedef int KeyType;
typedef char InfoType;
typedef struct{
    KeyType key;
    InfoType info;
}RedType;

typedef struct{
    RedType r[MAXSIZE + 1];
    int length;
}SqList;

#endif