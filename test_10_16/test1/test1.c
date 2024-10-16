// 求一个数的阶乘
#include<stdio.h>

int main()
{
// 输入
    int n;
    printf("输入一个数字求它的阶乘:");
    scanf("%d",&n);
    int fact = 1;
    int i = 1;
//循环

    // for (i=1; i<=n; i++){
    //     fact *= i;
    // }
    for (i=n; i>1; i--){
        fact *= i;
    }
    // for (; n>1; n--){
    //     fact *= n;
    // }
// 输出
    printf("%d!=%d\n",n,fact);

    return 0;
}