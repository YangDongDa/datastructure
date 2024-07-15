#include "SqSatckHead.h"
bool Push(SqStack *S , ElemType e){
    if (S->top + 1 == MaxSize)
    {
        return false;
    }
    S->data[++S->top] = e;
    return true;
    
}