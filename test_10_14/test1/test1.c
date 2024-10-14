#include<stdio.h>
int main()
{
    int sum = 0; //初始化
    printf("请输入一个[0,153]范围内的正整数");
    scanf("%d", &sum); //输入
    // int a = sum/16;
    // int b = sum%16;
    // int c = a*10 + b;
    // printf("%d",c); //输出
    printf("%x", sum);

    return 0;
}