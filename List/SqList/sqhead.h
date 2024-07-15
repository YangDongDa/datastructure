#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#ifndef _SqHead_H_
#define _SqHead_H_
    #define MaxSize 100
    #define InitSize 100
    #define ElemType int
    // 静态分配的顺序表
    typedef struct SqList
    {
        ElemType data[MaxSize];
        int length;
    }SqList;

    // 动态分配的顺序表
    typedef struct SeqList
    {
        ElemType *data;
        int length;
        int maxsize;
    }SeqList;


    /*
        数据结构三要素：逻辑结构、存储结构、、数据运算
        下面就是个顺序表的运算，包括初始化、增删查改操作
        且其中在结尾带1的是动态分配的顺序表的操作
    */

    //初始化
    void InitList(SqList *L);
    void InitList1(SeqList *L);

    //扩大动态顺序表
    bool ListExtend(SeqList *L, int n);


    //插入,输入为顺序表和要插入元素的位序，注意不是下标是位序
    bool ListInsert(SqList *L, int i, ElemType e);
    bool ListInsert1(SeqList *L, int i, ElemType e);
    //删除操作，输入i是要删除的位序，e是所删除的元素
    bool ListDelete(SqList *L, int i, ElemType *e);
    bool ListDelete1(SeqList *L, int i, ElemType *e);

    //按值查找,返回的注意是位序不是下标,由于顺序表是随机存取，因此按位查找的速度为o(1)
    int LocateElem(SqList L, ElemType e);
    int LocateElem1(SqList L, ElemType e);

    void PrintSqList(SqList L);
    void PrintSqList1(SeqList L);



#endif