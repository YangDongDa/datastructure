#include "SqSatckHead.h"
int main ()
{


    //初始化
    // SqStack S;
    // InitStack(&S);

    // //插入测试
    // Push(&S,1);
    // Push(&S,2);
    // Push(&S,3);
    // Push(&S,4);
    // PrintSqStack(S);  


    // //删除测试
    // ElemType e = 0;
    // Pop(&S , &e);
    // PrintSqStack(S);


    // //GetTop测试
    // GetTop(S,&e);
    // printf("the top element is %d\n",e); // e = 3


    //栈的应用，表达式求值
    char Expression[128];
    int result = 0;
    scanf("%s",Expression);
    if(ExpressionCompute(Expression,&result)){
        printf("%d\n",result);
    }
    

}