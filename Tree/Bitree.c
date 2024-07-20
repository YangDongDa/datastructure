#include"TreeHead.h"
int main(){
    BiTree T = NULL;
    BiTNode N1;
    BiTNode N2;
    BiTNode N3;
    BiTNode N4;
    BiTNode N5;
    N5.data = 'C';
    N5.lchild = NULL;
    N5.rchild = NULL;
    N4.data = 'D';
    N4.lchild = NULL;
    N4.rchild = NULL;
    N3.data = 'B';
    N3.lchild = &N4;
    N3.rchild = &N5;
    N2.data = 'E';
    N2.lchild = NULL;
    N2.rchild = NULL;
    N1.data = 'A';
    N1.lchild = &N3;
    N1.rchild = &N2; 
    T=&N1;
    PreOrder(T);
    printf("\n");
    InOrder(T);
    printf("\n");
    PostOrder(T);
    printf("\n");    
}