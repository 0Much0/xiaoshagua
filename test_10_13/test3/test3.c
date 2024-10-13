#include<stdio.h>
int main()
{
    printf("请输入一个3位的正整数:\n");
    int num = 0; //初始化
    scanf("%d", &num); //输入
    int a = num/100; //定义第一位数字是a，类推
    int b = (num/10)%10;
    int c = num%10;
    
    printf("%d%d%d",c,b,a);

    return 0;
}