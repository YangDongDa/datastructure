#include "sqhead.h"
void PrintSqList(SqList L){
        printf("[ ");
        for (size_t i = 0; i < L.length; i++)
        {
            printf("%d\t",L.data[i]);
        }
        printf(" ]\n");
        
}
void PrintSqList1(SeqList L){
        printf("[ ");
        for (size_t i = 0; i < L.length; i++)
        {
            printf("%d\t",L.data[i]);
        }
        printf(" ]\n");
        
}