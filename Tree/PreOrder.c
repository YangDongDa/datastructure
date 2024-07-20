#include"TreeHead.h"
void PreOrder(BiTree T){
    if (T == NULL)
    {
        return;
    }
    printf("%c ",T->data);
    PreOrder(T->lchild);
    PreOrder(T->rchild);
    
}