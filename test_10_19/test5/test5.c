// 求最大公约数
#include<stdio.h>

int main()
{
    int a,b;
    int c;
    printf("请输入两个数，求它们的最大公约数:");
    scanf("%d %d",&a,&b);

    for(; b!=0; ){
        c = a%b;
        a = b;
        b = c;
        }
    printf("它们的最大公约数是%d\n",a);

    return 0;
}