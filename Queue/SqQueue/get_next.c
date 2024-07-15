#include"SString.h"
//构建next表
// void get_next(SString T, int *next){
//     int i = 3, j = 2;
//     next[1] = 0;
//     next[2] = 1;
//     while (i <= T.length)
//     {
//         if (T.ch[j] == T.ch[next[j]])
//         {
//             next[i] = next[j] + 1;
//         }else{
//             int temp = next[j];
//             while(T.ch[next[temp]] != T.ch[j] && next[temp] != 0){
//                 temp = next[temp];
//             }
//             next[i] = next[temp] + 1;
//         }
//         i++,j++;      
//     }
    
// }
void get_next(SString T, int *next){
    int i = 1;  //已匹配了i-1个字符 ,比较第i个字符和j = next(i)是否相等
    int j = 0;
    next[1] = 0;
    while (i < T.length)
    {
        if (j = 0 || T.ch[i] == T.ch[j])
        {
            i++,j++;
            if (T.ch[i] != T.ch[j])
            {
                next[i] = j;
            }else{
                next[i] = next[j];
            }
            
        }else{
            j = next[j];
        }
        
    }
    
}