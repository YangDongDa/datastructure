#include "SqQueueHead.h"
bool IsFull(SqQueue Q){
    if (Q.front == (Q.rear + 1) % MaxSize)
    {
        return true;
    }else{
        return false;
    }
    
}