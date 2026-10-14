#include<stdio.h>
int main()
{
    int sum=0;
    int i=1;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("1~100µÄÆæÊıºÍ= %d\n",sum);
    return 0;
}