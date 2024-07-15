#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#ifndef _SqStack_H_
#define _SqStack_H_
#define MaxSize 128
#define ElemType int
// 顺序栈
typedef struct SqStack
{
    ElemType data[MaxSize];
    int top;
} SqStack;

/*
    数据结构三要素：逻辑结构、存储结构、、数据运算
    下面就是个顺序栈的运算，包括初始化、增删查改操作
    下列以栈顶指针指向栈顶元素的栈来编写，即初始时top=-1
*/

// 初始化
void InitStack(SqStack *S);

// 判空
bool StackEmpty(SqStack S);

// 进栈
bool Push(SqStack *S, ElemType e);

// 出栈
bool Pop(SqStack *S, ElemType *e);

// 栈顶元素
bool GetTop(SqStack S, ElemType *e);

void PrintSqStack(SqStack S);
void PrintSqStackChar(SqStack S);

// 表达式求值,整数表达式求值，输入表达式字符串指针，计算结果值，用于取回；
bool ExpressionCompute(char *Expression, int *result);

bool IsNum(char ch);

int Compute(int a, int b, char op);

#endif