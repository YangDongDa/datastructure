#include "LinkListhead.h"
bool InitList(LinkList *L){
    *L = (LNode *) malloc(sizeof(LNode));
    if ((*L) == NULL)
    {
      return false;
    }
    (*L)->next = NULL;
    return true;
}