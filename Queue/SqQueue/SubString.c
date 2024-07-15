#include"SString.h"
// 取子串
bool SubString(SString *Sub, SString S,int pos,int len){
    if (pos + len - 1 > S.length)
    {
        return false;
    }
    
    for (int i = pos; i < pos + len; i++)
    {
        Sub->ch[i - pos + 1] = S.ch[i];
    }
    Sub->length = len;
    return true;
    
}