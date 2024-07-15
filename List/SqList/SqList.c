#include "sqhead.h"
int main ()
{
    SqList L;

    //初始化
    InitList(&L);

    //插入初始数字
    ListInsert(&L,1,1);
    ListInsert(&L,2,2);
    ListInsert(&L,3,3);
    ListInsert(&L,4,4);
    ListInsert(&L,4,5);
    printf("Initial SqList is\n");
    PrintSqList(L);

    //插入测试

    if (ListInsert(&L,3,6))
    {
        printf("Insert Successfully ,the SqList is\n");
        PrintSqList(L);
    }
    if (!ListInsert(&L,0,7))
    {
        printf("Insert failed ,the SqList is\n");
        PrintSqList(L);
    }



    //删除测试

    ElemType e = -1;
    if (ListDelete(&L,3,&e))
    {
        printf("Delete Successfully,the deleted element is %d ,the SqList is\n",e);
        PrintSqList(L);
    }

    if (!ListDelete(&L,0,&e))
    {
        printf("Delete failed ,the SqList is\n");
        PrintSqList(L);
    }

    //按位查找测试
    e = LocateElem(L,3);
    if (e)
    {
        printf("Locate successfully, the position is %d\n",e);
    }
    e = LocateElem(L,8);
    if (!e)
    {
        printf("Locate failed\n");
    }
    
    
    
    




}