#include "SqQueueHead.h"
bool IsEmpty(SqQueue Q){
    if (Q.front == Q.rear)
    {
        return true;
    }else{
        return false;
    }
    
}