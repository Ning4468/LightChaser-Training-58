#include <stdio.h>
#include <stdlib.h>//要用malloc/free
int main()
{
    int n;
    printf("请输入数组元素的个数:\n");
    if(scanf("%d",&n)!=1||n<=0)
    {
        printf("输入无效,须输入正整数。\n");
        return 1;
    }
    int *arr=(int*)malloc((size_t)n*sizeof(int));
    if(arr==NULL)
    {
        printf("申请内存失败\n");
        return 1;
    }
    int sum = 0;
    double average =0.0;
    for(int i = 0;i < n;i++)
    {
    printf("请输入第%d个整数\n",i+1);
    scanf("%d",&arr[i]);
    sum = sum + arr[i];
    }
    average = (double)sum/n;
    printf("平均值为:%2f\n",average);
    free(arr);
    arr=NULL;
    return 0;
}