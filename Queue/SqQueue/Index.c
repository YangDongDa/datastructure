#include"SString.h"
//定位操作,在S中定位T
int Index(SString S, SString T)//朴素模式匹配，暴力求解时间复杂度O(mn)
{
    int i = 1,j = 1;
    while(i <= S.length && j <= T.length){
        if (S.ch[i] == T.ch[j])
        {
            i++,j++;
        }else{
            i = i - j + 2;//转移到i + 1的后面继续匹配
            j = 1;
        }
    }
    if (j > T.length)
    {
        return i - T.length;
    }
    return 0;
    
}