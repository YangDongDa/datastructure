#include "SqSatckHead.h"
void PrintSqStackChar(SqStack S){
    while (!StackEmpty(S))
    {
        printf("%c ->",S.data[S.top--]);
    }
    printf(" bottom\n");
    
}