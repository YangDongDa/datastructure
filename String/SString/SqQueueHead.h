#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#ifndef _SqQueue_H_
#define _SqQueue_H_
#define MaxSize 10
#define ElemType int
// 顺序栈
typedef struct SqQueue
{
    ElemType data[MaxSize];
    int front;
    int rear;
} SqQueue;

/*
 *  数据结构三要素：逻辑结构、存储结构、、数据运算
 *  下面就是个顺序栈的运算，包括初始化、增删查改操作
 *  下列以队头指针指向队头元素、队尾指针指向队尾元素---->对头等于队尾时为空
 *   牺牲一个空间作为判满条件----->堆尾+1 == 队头 时则满  
*/

// 初始化
void InitQueue(SqQueue *Q);

// 判空
bool IsEmpty(SqQueue Q);

//判满
bool IsFull(SqQueue Q);

// 进栈
bool EnQueue(SqQueue *Q, ElemType e);

// 出栈
bool DeQueue(SqQueue *Q, ElemType *e);


void PrintSqStack(SqQueue Q);



#endif