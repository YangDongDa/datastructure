#include "LinkListhead.h"
bool ListDelete(LinkList *L, int i, ElemType *e){
/*
    *两个步骤
    *   1. 找到需要删除结点的前驱 
    *   2. 将前驱结点的next指针指向待删除结点的后继，释放待删除结点的内存
*/


    //找到需要删除结点的前驱 ,第i - 1个结点
    // if (i < 1)
    // {
    //     return false;
    // }
    // int j = 0;
    // LNode *p = (*L)->next;
    // while (p != NULL && j < i - 1)//寻找第i - 1个结点
    // {
    //     p = p->next;
    //     j++;
    // }

    LNode *p = GetElem(*L , i - 1);


    //将前驱结点的next指针指向待删除结点的后继，释放待删除结点的内存
    if (p == NULL || p->next == NULL)
    {
        return false;
    }
    LNode *temp = p->next;
    *e = temp->data;
    p->next = temp->next;
    free(temp);
    return true;
    
    
    
}