void swap(int*p1,int*p2)
{
    int x = 0;
    x =*p1;
    *p1=*p2;
    *p2=x;
}
#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    printf("交换前:a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("交换后:a=%d b=%d\n",a,b);
    return 0;
}