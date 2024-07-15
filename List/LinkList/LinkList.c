#include "LinkListhead.h"
int main ()
{
  

    //初始化

    LinkList L1;
    LinkList L2;

    List_HeadInsert(&L1);//头插法创建链表
    List_TailInsert(&L2);//尾插法创建链表
    printf("HeadInsert,length is %d ,L1:\n",Length(L1));
    PrintLinkList(L1);
    printf("TailInsert L2,length is %d:\n",Length(L2));
    PrintLinkList(L2);

    //按位查找测试

    printf("test of GetElem\n");
    LNode* n1 = GetElem(L2,3);
    printf("the third element is %d\n",n1->data);


    LNode* n2 = GetElem(L2,-1);
    if (n2 == NULL)
    {
        printf("the -1 element is NULL\n");
    }
    
    LNode* n3 = GetElem(L2,7);
    if (n3 == NULL)
    {
        printf("the seventh element is NULL\n");
    }


    //按值查找测试
    printf("test of LocateElem\n");
    LNode* n4 = LocateElem(L2,2);
    printf("the value is %d\n", n4->data);

    LNode* n5 = LocateElem(L2,9);
    if (n5 == NULL)
    {
        printf("find false\n");
    }



    //插入测试
    printf("test of ListInsert\n\n");
    printf("Insert first with 100\n");
    if(ListInsert(&L1,1,100)){
        printf("Insert successfully, the L1 is\n");
        PrintLinkList(L1);
    }else{
        printf("Insert false, the L1 is\n");
        PrintLinkList(L1);
    }


    printf("Insert seventh with 101\n");
    if(ListInsert(&L1,7,101)){
        printf("Insert successfully, the L1 is\n");
        PrintLinkList(L1);
    }else{
        printf("Insert false, the L1 is\n");
        PrintLinkList(L1);
    } 

    printf("Insert zero with 100\n");
    if(ListInsert(&L1,0,100)){
        printf("Insert successfully, the L1 is\n");
        PrintLinkList(L1);
    }else{
        printf("Insert false, the L1 is\n");
        PrintLinkList(L1);
    } 

    printf("Insert ninth with 101\n");
    if(ListInsert(&L1,9,101)){
        printf("Insert successfully, the L1 is\n");
        PrintLinkList(L1);
    }else{
        printf("Insert false, the L1 is\n");
        PrintLinkList(L1);
    } 

    //删除测试
    printf("test of ListDelete\n\n");
    printf("Delete first\n");
    ElemType e;
    if(ListDelete(&L1,1,&e)){
        printf("Delete successfully, %d was deleted ,the L1 is\n",e);
        PrintLinkList(L1);

    }else{
        printf("Delete false, the L1 is\n");
        PrintLinkList(L1);
    }

    printf("Delete sixth\n");
    if(ListDelete(&L1,6,&e)){
        printf("Delete successfully, %d was deleted ,the L1 is\n",e);
        PrintLinkList(L1);
    }else{
        printf("Delete false, the L1 is\n");
        PrintLinkList(L1);
    }

    printf("Delete zero\n");
    if(ListDelete(&L1,0,&e)){
        printf("Delete successfully, %d was deleted ,the L1 is\n",e);
        PrintLinkList(L1);
    }else{
        printf("Delete false, the L1 is\n");
        PrintLinkList(L1);
    }

    printf("Delete sixth\n");
    if(ListDelete(&L1,6,&e)){
        printf("Delete successfully, %d was deleted ,the L1 is\n",e);
        PrintLinkList(L1);
    }else{
        printf("Delete false, the L1 is\n");
        PrintLinkList(L1);
    }

 


    }
    
    
    
    



