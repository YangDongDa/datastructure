#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#ifndef _TREE_H_
#define _TREE_H_

#define ElemType char
typedef struct BiTNode
{
    ElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;   //二叉树


// typedef struct ThreadNode
// {
//     ElemType data;
//     struct ThreadNode *lchild,*rchild;
//     int ltag,rtag;
// };  //线索二叉树


//二叉树遍历
void PreOrder(BiTree T);//先序
void PreOrder1(BiTree T);//先序非递归

void InOrder(BiTree T);//中序
void InOrder2(BiTree T);//中序非递归

void PostOrder(BiTree T);//后序
void PostOrder2(BiTree T);//后序非递归

void LevelOrder(BiTree T);//层次遍历

//二叉树深度
int TreeDepth(BiTree T);



#endif