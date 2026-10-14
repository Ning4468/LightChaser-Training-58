#include<stdio.h>
int main()
{
    double a,b;//双精度浮点数
    char e;
    printf("请输入表达式：\n");
    scanf("%lf%c%lf",&a,&e,&b);
    switch(e)//多分支判断运算
    {
        case '+':
            printf("结果=%.2f\n",a+b);
            break;
        case '-':
            printf("结果=%.2f\n",a-b);
            break;
        case '*':
            printf("结果=%.2f\n",a*b);
            break;
        case '/':
            if(b==0)
            {
                printf("除数不能为0\n");
            }
            else
            {
                printf("结果=%.2f\n",a/b);
            }
            break;
        default:
            printf("不支持该运算符\n");
    }
    return 0;
}