#include"TreeHead.h"
void InOrder(BiTree T){
    if (T == NULL)
    {
        return;
    }
    PreOrder(T->lchild);
    printf("%c ",T->data);
    PreOrder(T->rchild);
    
}