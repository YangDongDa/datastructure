#include "LinkListhead.h"
bool ListNextInsert(LNode *p, ElemType e){
    if (p == NULL)
    {
        return false;
    }
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->next = p->next;
    s->data = e;
    p->next = s;
    return true;
    
}