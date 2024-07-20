#include"TreeHead.h"
void PostOrder(BiTree T){
    if (T == NULL)
    {
        return;
    }
    PreOrder(T->lchild);
    PreOrder(T->rchild);
    printf("%c ",T->data);
    
}