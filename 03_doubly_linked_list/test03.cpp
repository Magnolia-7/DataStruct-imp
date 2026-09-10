#include "../common.h"
#include "doublylink.h"

int main(){
    DLinkList L;
    InitDList(L);

    DListInsert(L, 1, 4);
    DListInsert(L, 1, 3);
    DListInsert(L, 1, 2);

    for(int i = 3; i > 0; i--){
        ElemType e;
        DListDelete(L, i, e);
        std::cout << "这次删除的是" << e << std::endl;
    }

    ElemType elem;
    if(!DListDelete(L,1, elem)){
        std::cout << "删除失败" << std::endl;
    }
}