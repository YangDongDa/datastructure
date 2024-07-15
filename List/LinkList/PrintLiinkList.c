#include"LinkListhead.h"
void PrintLinkList(LinkList L){

    LNode *p = L->next;
    printf("head ->");
    while (p != NULL)
    {
        printf(" %d ->",p->data);
        p = p->next;
    }
    printf(" NULL\n");
    
}