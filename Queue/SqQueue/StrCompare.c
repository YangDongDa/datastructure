#include"SString.h"
//比较串，S>T 返回正数，S=T 返回0， S<T 返回负数
int StrCompare(SString S, SString T){
    int i = 1, j = 1;
    while (i <= S.length && j <= T.length )
    {
        if (S.ch[i] != T.ch[j])
        {
            return S.ch[i] - T.ch[j];
        }
        i++,j++;
        
    }
    return S.ch[i] - T.ch[j];
    
}