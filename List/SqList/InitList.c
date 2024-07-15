#include "sqhead.h"
  void InitList(SqList *L){
    L->length=0;  
  }
    void InitList1(SeqList *L){
    L->data=(ElemType *)malloc(sizeof(ElemType)*InitSize);
    L->length=0;  
    L->maxsize=InitSize;
  }