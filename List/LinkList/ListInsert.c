#include "LinkListhead.h"
bool ListInsert(LinkList *L, int i, ElemType e){

    /*
    * 两个步骤
    * 1. 找到插入位序的前一个节点，
    *   由于头结点的存在，因此不用考虑当 i=1的情况边界的处理
    *   若该节点为NULL说明要插入的位置已经越界
    * 2. 对找到的节点进行尾插
    */


    //查找第 i - 1 的节点，该段代码可以直接引用按位查找函数
/*          考虑边界条件，当i <= 0时越界，返回false，当 i == 1时 ，应返回头节点
    if (i < 1)
    {
        return false;
    }
    int j = 0;
    LNode *p = L;
    while (p != NULL && j < i - 1)
    {
        p = p->next;
        j++;
    }
*/
    LNode *p = NULL;
    p = GetElem(*L , i - 1);

    // 对第 i - 1个节点进行后插
/*      边界范围 0节点(头节点) 到尾节点，即不为NULL的节点
    if (p == NULL)
    {
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->next = p->next;
    s->data = e;
    p->next = s;
    return true;
*/    
    return ListNextInsert(p,e);
    
}