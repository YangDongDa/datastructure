#include "SqQueueHead.h"
bool EnQueue(SqQueue *Q, ElemType e){
    if (IsFull(*Q))
    {
        return false;
    }
    Q->data[Q->rear] = e;
    Q->rear = (Q->rear + 1) % MaxSize; 
    return true;
}