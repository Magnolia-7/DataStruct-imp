using KeyType = int;
using InfoType = char;

typedef struct{
    KeyType key;
    InfoType info;
}ElemType;

typedef struct{
    ElemType *R;
    int length;
}SSTable;

int Search_Bin(SSTable ST, KeyType key){
    int low = 1; int high = ST.length;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(ST.R[mid].key == key)
            return mid;
        else if(key < ST.R[mid].key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}
