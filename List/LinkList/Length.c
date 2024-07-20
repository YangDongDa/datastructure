#include "LinkListhead.h"
int Length(LinkList L){//求长度
    LNode *p = L->next;
    int len = 0;
    while (p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
    
}