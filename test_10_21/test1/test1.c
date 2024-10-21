#include<stdio.h>

int main()
{
// 输入
    int M,N;
    printf("请输入整数M N的值为(1<=M<=N<=500):");
    scanf("%d %d",&M,&N);
    int a = M;
    int b = 0;
    int sum = 0;
    if(M==1)
        M=2;

// 循环
    for(;a<=N;a++){
// 判断是否为素数
        int isTrue = 1;
        int i = 2;
        for (; i<a; i++){
            if (a%i == 0){
                isTrue = 0;
                break;
                }
            }
        if (isTrue == 1){
            sum += i;
            b++;
        }
    }
// 输出
    printf("%d %d",b,sum);

    return 0;
}