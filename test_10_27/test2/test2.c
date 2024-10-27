#include<stdio.h>

void cheer(int );

int main()
{
    cheer(2.4); // 自动转换，结果是int类型的cheer 2

    return 0;
}

void cheer(int i)
{
    printf("cheer %d\n",i);
}