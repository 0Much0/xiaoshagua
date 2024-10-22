#include<stdio.h>

int main()
{
    int x,y;
// 输入
    scanf("%d/%d",&x,&y);
    int a = x;
    int b = y;
    int c;
// 循环求最大公约数
    for(;b>0;){
        c = a%b;
        a = b;
        b = c;
    }
// 计算并输出
    printf("%d/%d\n",x/a,y/a);

    return 0;
}