#include<stdio.h>

int main()
{

// 输入
    int N;
    printf("请输入正整数N的值为:");
    scanf("%d",&N);
    int i = 1;
    double x = 1.0;
    double y = 2.0;
    double z = 0.0;
    double sum = 0.0;
// 循环
    for(;i<=N;i++){
        sum += y/x;
        z = y;
        y = x+y;
        x = z;

    }
    printf("%.2f\n",sum);

    return 0;
}