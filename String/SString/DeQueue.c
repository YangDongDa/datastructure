#include "SqQueueHead.h"
bool DeQueue(SqQueue *Q, ElemType *e){
    if (IsEmpty(*Q))
    {
        return false;
    }
    *e = Q->data[Q->front];
    Q->front = (Q->front + 1) % MaxSize; 
    return true;
}