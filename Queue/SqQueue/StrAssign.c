#include"SString.h"
// 赋值串
bool StrAssign(SString *S,char *str){
    int l = strlen(str);
    int i = 1;
    while (i < MaxSize && i < l + 1)
    {
        S->ch[i] = str[i - 1];
        i++;
    }
    S->length = l;
    if (i > l)
    {
        return true;
    }else return false;
    
    
}