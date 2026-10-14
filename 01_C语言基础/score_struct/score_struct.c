#include<stdio.h>
struct transcript
{
    char nanme[20];//名字
    int score;//分数 
};
int main()
{
    struct transcript t1={"木子",100};
    struct transcript*ps=&t1;
    printf("成绩单\n");
    printf("名字:%s\n",ps->nanme);//通过指针来访问结构体成员
    printf("分数:%d\n",ps->score);
    return 0;
}