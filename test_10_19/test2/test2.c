// 逆序分解整数(改进)
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
        printf("%d",a);
        if(x > 9){
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}