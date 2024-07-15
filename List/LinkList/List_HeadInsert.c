#include "LinkListhead.h"
LinkList List_HeadInsert(LinkList *L){
    /*
    *头插法建立链表
    *   1. 使用键盘输入的方式建立链表
    *   2. 对头结点进行后插操作
    */

   //创建并初始化链表
    InitList(L);

   ElemType input;
   printf("Please input the data of node, end with inputting 9999\n");
   scanf("%d",&input);
   while(input != 9999)
   {
        //采用对头结点后插地方式建立链表
        ListNextInsert(*L,input);
        scanf("%d",&input);
   }

    return (*L);
}