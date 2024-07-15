#include "sqhead.h"
int LocateElem(SqList L, ElemType e){
    for (size_t i = 0; i < L.length; i++)
    {
        if (L.data[i] == e)
        {
            return i + 1;
        }
    }
    return 0;
    
}
int LocateElem1(SqList L, ElemType e){
        for (size_t i = 0; i < L.length; i++)
    {
        if (L.data[i] == e)
        {
            return i + 1;
        }
    }
    return 0;
}