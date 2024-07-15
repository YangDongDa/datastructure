#include "sqhead.h"
bool ListDelete(SqList *L, int i, ElemType *e){

    if (i < 1 || i > L->length)
    {
        return false;
    }

    *e = L->data[i - 1];
    for (int j = i; j <= L->length - 1; j++)
    {
        L->data[j - 1] = L->data[j];
    }
    L->length--;
    return true;
    
    
}
bool ListDelete1(SeqList *L, int i, ElemType *e){

    if (i < 1 || i > L->length)
    {
        return false;
    }
    
    *e = L->data[i - 1];
    for (int j = i; j <= L->length - 1; j++)
    {
        L->data[j - 1] = L->data[j];
    }
    L->length--;
    return true;
}
