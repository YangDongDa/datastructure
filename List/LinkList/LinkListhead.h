#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#ifndef _LinkListHead_H_
#define _LinkListHead_H_
    
    #define ElemType int
    // 静态分配的顺序表
    typedef struct LNode
    {   
        ElemType data;
        struct LNode* next;        
        
    }LNode,*LinkList;


    /*
        数据结构三要素：逻辑结构、存储结构、、数据运算
        下面就是个顺序表的运算，包括初始化、增删查改操作
        且其中在结尾带1的是动态分配的顺序表的操作
    */

    //初始化带头结点的链表
    bool InitList(LinkList *L);

    //求表长
    int Length(LinkList L);

    //头插法建立单链表，即每次都在位序为1的节点插入
    LinkList List_HeadInsert(LinkList *L);

    //尾插法建立单链表，每次都在最后一个结点之后插入
    LinkList List_TailInsert(LinkList *L);

    //逆置链表，使用头插法
    LinkList ListConverse(LinkList *L);


    //插入,输入为顺序表和要插入元素的位序，注意不是下标是位序
    bool ListInsert(LinkList *L, int i, ElemType e);


    //删除操作，输入i是要删除的位序，e是所删除的元素
    bool ListDelete(LinkList *L, int i, ElemType *e);

    //后插操作
    bool ListNextInsert(LNode *p, ElemType e);

    //前插操作
    bool ListFrontInsert(LNode *p, ElemType e);


    //按位查找，复杂度O(n)，返回该节点的指针
    LNode* GetElem(LinkList L, int i);



    //按值查找,复杂度O(n),返回该节点的指针
    LNode* LocateElem(LinkList L, ElemType e);


    //打印链表
    void PrintLinkList(LinkList L);



#endif