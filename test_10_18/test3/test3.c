// f(n) = 1-1/2+1/3-...+1/n,求前n项和
#include<stdio.h>

int main()
{
// 初始化
    int n;
    int i;
    double a = 1.0;
    double sum = 0.0;

// 输入
    printf("请输入n的值:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        sum += a/i;
        a = -a;
    }
// 输出
    printf("f(%d)=%f\n",n,sum);

    return 0;
}