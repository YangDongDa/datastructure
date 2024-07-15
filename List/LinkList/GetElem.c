#include"LinkListhead.h"
LNode* GetElem(LinkList L, int i){
    if (i < 0)
    {
        return NULL;
    }
    LNode *p = L;
    int j = 0;
    while (p != NULL && j< i)
    {
        p = p->next;
        j++;
    }
    return p;
    
}