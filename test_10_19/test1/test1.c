// 逆序分解整数
#include<stdio.h>

int main()
{
    int x;
// 输入
    printf("请输入要分解的整数n的值为:");
    scanf("%d",&x);

// 循环
    for(; x>0; x/=10){
        int a = x%10;
        printf("%d ",a);
    }

    return 0;
}