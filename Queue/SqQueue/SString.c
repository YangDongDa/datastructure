#include"SString.h"
int main ()
{

    SString S,T,Sub;
    char str[MaxSize] = "adsdaacvsddabaabcabaddasdwdewq";
    char c[MaxSize] = "abaabcaba";
    InitSString(&S);
    InitSString(&T);
    InitSString(&Sub);
    StrAssign(&S,str);
    StrAssign(&T,c);
    int next[T.length + 1];
    get_next(T,next);
    int a = Index(S,T);
    int b = IndexKMP(S,T,next);
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    SubString(&Sub,S,b,T.length);
    for (size_t i = 1; i <= Sub.length; i++)
    {
        printf("%c",Sub.ch[i]);
    }
    
    




}