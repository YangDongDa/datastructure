#include "SqSatckHead.h"
bool Pop(SqStack *S, ElemType *e){
    if (StackEmpty(*S))
    {
        return false;
    }
    *e = S->data[S->top--];
    return true;
}