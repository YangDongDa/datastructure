#include "LinkListhead.h"
LinkList List_HeadInsert(LinkList *L){
    /*
    *ͷ�巨��������
    *   1. ʹ�ü�������ķ�ʽ��������
    *   2. ��ͷ�����к�����
    */

   //��������ʼ������
    InitList(L);

   ElemType input;
   printf("Please input the data of node, end with inputting 9999\n");
   scanf("%d",&input);
   while(input != 9999)
   {
        //���ö�ͷ�����ط�ʽ��������
        ListNextInsert(*L,input);
        scanf("%d",&input);
   }

    return (*L);
}