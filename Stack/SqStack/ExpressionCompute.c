#include "SqSatckHead.h"
bool ExpressionCompute(char *Expression,int* result){

    /*
    * 整数表达式计算
    * 1. 中缀表达式转后缀 
    *    1. 遇到操作数直接加入后缀表达式
    *    2. 遇到界限符"(",直接入栈；若为")",依次但弹出符号加入后缀表达式，直到弹出"(","("不需要加入后缀表达式
    *    3. 遇到运算符，若其优先级高于栈顶元素，或为空栈，或为"("，直接入栈。否则，从栈顶开始依次弹出栈内优先级高于该运算符的符号加入后缀表达式，直到遇到优先级低于它的或者为空时，或者为"("
    * 2. 后缀表达式计算
    *    1. 顺序读取后缀表达式遇到操作数就读取下一个值
    *    2. 遇到运算符，取出前面的两个操作数依据运算符计算，先取出的为右操作数
    */


    SqStack Number;//操作数栈
    SqStack Op;//运算符栈
    InitStack(&Number);
    InitStack(&Op);
    int op;//从运算符栈中取出的运算符。
    int i = 0;
    while (Expression[i] != '\0')
    {
        if (IsNum(Expression[i]))
        {
            int Num = Expression[i] - '0';
            while (IsNum(Expression[i+1]))
            {
                Num = Num * 10 + Expression[++i] - '0'; 
            }
            Push(&Number, Num);
            // PrintSqStack(Number);//测试代码
            // PrintSqStackChar(Op);//测试代码
        }else switch (Expression[i])
        {
            case '+':
            case '-':
                //任何运算符高于或等于+、- 
                while (!StackEmpty(Op))
                {
                    Pop(&Op,&op);
                    if (op != '(')//不为前括号，则
                    {
                        int a,b,c;
                        Pop(&Number,&b);//右操作数
                        Pop(&Number,&a);//左操作数
                        c = Compute(a,b,(char)op);
                        if (c != 9999)
                            Push(&Number,c);
                    }else{
                        Push(&Op,op);
                        break;
                    }
                }
                Push(&Op,Expression[i]);
            // PrintSqStack(Number);//测试代码
            // PrintSqStackChar(Op);//测试代码
                break;
            case '*':
            case '/':

                while (!StackEmpty(Op))
                    {
                        Pop(&Op,&op);
                        if (op != '(' && op != '+' && op != '-')//不为前括号，则
                        {
                            int a,b,c;
                            Pop(&Number,&b);//右操作数
                            Pop(&Number,&a);//左操作数
                            c = Compute(a,b,(char)op);
                            if (c != 9999)
                                Push(&Number,c);
                        }else{
                            Push(&Op,op);
                            break;
                        }
                    }
                Push(&Op,Expression[i]);
            // PrintSqStack(Number);//测试代码
            // PrintSqStackChar(Op);//测试代码
                break;
            case '('://直接放入符号栈中
                Push(&Op,Expression[i]);
            // PrintSqStack(Number);//测试代码
            // PrintSqStackChar(Op);//测试代码
                break;
            case ')'://把到前括号为止所有的运算符都取出计算。
                Pop(&Op,&op);
                while (op != '(')
                {
                    int a,b,c;
                    Pop(&Number,&b);//右操作数
                    Pop(&Number,&a);//左操作数
                    c = Compute(a,b,(char)op);
                    if (c != 9999)
                        Push(&Number,c);
                    Pop(&Op,&op);
                }
            // PrintSqStack(Number);//测试代码
            // PrintSqStackChar(Op);//测试代码
                break;
            default:
                return false;
                
        }
        i++;
    }

    //当运算符栈还不为空时，取出进行求值，最后在操作数栈剩下的就是计算结果
    while (!StackEmpty(Op))
    {
        Pop(&Op,&op);
        int a,b,c;
        Pop(&Number,&b);//右操作数
        Pop(&Number,&a);//左操作数
        c = Compute(a,b,op);
        if (c != 9999)
            Push(&Number,c);

    }

    GetTop(Number,result);
    return true;
    
}