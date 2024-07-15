#include "SqSatckHead.h"
bool GetTop(SqStack S, ElemType *e){
    if (StackEmpty(S))
    {
        return false;
    }
    *e = S.data[S.top];
    return true;
    
}