#include<stdio.h>

int main(void)
{
    const int maxNumber;
    printf("请输入一个数为最大数,求比这个数小的所有素数:");
    scanf("%d",&maxNumber);
    int isPrime[maxNumber];
    int i,x;

    // 初始化数组,假设所有数都是素数
    for(i=0; i<maxNumber; i++){
        isPrime[i] = 1;
    }
    // 开始筛选,将非素数标记为0
    for(x=2; x<maxNumber; x++){
        if(isPrime[x]){
            for(i=2; i*x<maxNumber; i++){
                isPrime[i*x] = 0; // 标记x的倍数不是素数
            }
        }
    }
    // 输出所有标记为素数的数
    for(i=2; i<maxNumber; i++){
        if(isPrime[i]){
            printf("%d\t",i);
        }
    }
    printf("\n");

    return 0;
}