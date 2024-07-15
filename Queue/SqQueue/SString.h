#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#ifndef _SString_H_
#define _SString_H_
#define MaxSize 255
// 定长顺序存储表示
typedef struct SString
{
    char ch[MaxSize];
    int length;
} SString;

/*
 *  数据结构三要素：逻辑结构、存储结构、、数据运算
 *  下面就是个定长顺序存储串的运算，包括初始化、增删查改操作
 *  串的存储牺牲下标为0的存储单元，从1开始保持一致
*/

// 初始化
void InitSString(SString *S);

// 赋值串
bool StrAssign(SString *S,char *str);

//比较串，S>T 返回正数，S=T 返回0， S<T 返回负数
int StrCompare(SString S, SString T);

//求子串，用Sub返回串S的第pos个字符起长度为len的字串
bool SubString(SString *Sub, SString S,int pos,int len);

//定位操作,在S中定位T
int Index(SString S, SString T);//朴素模式匹配
int IndexKMP(SString S, SString T, int *next);//KMP算法


//构建next表
void get_next(SString T, int *next);






#endif