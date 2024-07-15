#include "SqQueueHead.h"
int main ()
{


    //初始化
    SqQueue Q;
    InitQueue(&Q);

    //插入测试
    EnQueue(&Q,1);
    EnQueue(&Q,2);
    EnQueue(&Q,3);
    EnQueue(&Q,4);
    EnQueue(&Q,5);
    PrintSqStack(Q);


    //删除测试
    int e = 0;
    DeQueue(&Q,&e);
    DeQueue(&Q,&e);
    DeQueue(&Q,&e);
    PrintSqStack(Q);




}