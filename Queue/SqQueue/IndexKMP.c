#include"SString.h"
int IndexKMP(SString S, SString T ,int *next)//KMP算法
{
    int i = 1,j = 1;
    while (i <= S.length && j <= T.length)
    {
        if (S.ch[i] == T.ch[j] || j == 0)
        {
            i++,j++;
        }else {
            j = next[j];
        }
    }
    if (j > T.length)
    {
        return i - T.length;
    }
    return 0;
    
    
}