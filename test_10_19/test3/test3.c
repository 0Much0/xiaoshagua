// 逆序分解整数(改进)
#include<stdio.h>

int main()
{
    int x;
// 输入
    printf("请输入要分解的整数n的值为:");
    scanf("%d",&x);
    int b = 1;
    int c = 0;
    int d = x;
    for(; d>9 ;){
        d/=10;
        b*=10;
    }
// pow函数
//    int b = pow(10, c-1);

// 循环
    do {
        int a = x/b;
        printf("%d",a);
        if(b > 1){
            printf(" ");
        }
        x %= b;
        b /= 10;
    }while(b > 0);

    printf("\n");

    return 0;
}