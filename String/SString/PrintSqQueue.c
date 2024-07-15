#include "SqQueueHead.h"
void PrintSqStack(SqQueue Q){
    printf("front -> ");
    while (!IsEmpty(Q))
    {
        printf("%d -> ",Q.data[Q.front]);
        Q.front = (Q.front + 1) % MaxSize;
    }
    printf("rear\n");
    
}