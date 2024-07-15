#include "LinkListhead.h"
LinkList List_TailInsert(LinkList *L){
    /*
    *尾插建立链表
    *   1. 新建并初始化一个链表
    *   2. 记录尾结点位置通过对于尾节点后插地方式建立链表标
    */

   //新建并初始化一个链表
   InitList(L);

   LNode *p = (*L); //记录尾节点的位置
   ElemType input;
   printf("Please input the data of node, end with inputting 9999\n");
   scanf("%d", &input);
   while (input != 9999)
   {
        ListNextInsert(p,input);
        p = p->next;
        scanf("%d", &input);
   }
   return (*L);
   
}