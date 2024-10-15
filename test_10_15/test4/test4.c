// 判断一个整数是几位数
#include<stdio.h>

int main()
{
    int x;
    int n = 0;
// 输入
    printf("请输入一个整数:");
    scanf("%d",&x);
    n++;
    x /= 10;
// 循环判断
    while (x != 0){
        n++;
        x /= 10;
    }
// 输出
    printf("这个数是%d位数\n",n);

    return 0 ;
}