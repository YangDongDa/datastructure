#include "SqSatckHead.h"
void PrintSqStack(SqStack S){
    while (!StackEmpty(S))
    {
        printf("%d ->",S.data[S.top--]);
    }
    printf(" bottom\n");
    
}