#include "SqSatckHead.h"//计算
int Compute(int a, int b, char op){
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return 9999;
    }

}