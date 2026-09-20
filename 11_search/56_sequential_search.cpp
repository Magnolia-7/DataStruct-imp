using KeyType = int;
using InfoType = char;
// Task 56: sequential search.
// TODO: Implement this exercise yourself.

typedef struct{
    KeyType key;
    InfoType info;
}ElemType;

typedef struct{
    ElemType *R;
    int length;
}SSTable;

int Search_Seq(SSTable &ST, KeyType key){
    for(int i = ST.length; i >= 1; i--){
        if(ST.R[i].key == key)
            return i;
    }
    return 0;
}

int Search_Seq2(SSTable &ST, KeyType key){
    ST.R[0].key = key;
    for(int i = ST.length; ST.R[i].key != key; i--){
        if(ST.R[i].key == key)
            return i;
    }
}

