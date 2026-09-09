// Task 01: initialize.
// TODO: Implement this exercise yourself.

#include "../common.h"
#include "seqlist.h"


bool InitSqList(SqList &L){
    L.elem = new ElemType[MAXSIZE];
        if(!L.elem){
        std::cerr<< "error" << std::endl;
        return false;
    }
    L.length = 0;
    return true;
}

