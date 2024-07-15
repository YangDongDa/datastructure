#include "LinkListhead.h"
bool ListFrontInsert(LNode *p, ElemType e){
    /*
        *前插有两种方式
        *   1.传入整个链表，找出要插入结点的前驱，再进行后插操作,复杂度O(n)
        *   2.再要前插的结点前插入一个结点，然后交换两个结点的数据域，时间复杂度O(1),可以对所有结点进行前插,包括头结点
        *后面操作为方法2
    */
   if (p == NULL)
   {
        return false;
   }
   
   
   LNode *s = (LNode* )malloc(sizeof(LNode));
   s->next = p->next;
   p->next = s;
   s->data = p->data;
   p->data = e;
   return true;

}