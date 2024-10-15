// 整数求逆
#include <stdio.h>

int main()
{
// 初始化
    int x;
    printf("请输入一个整数:");
    scanf("%d",&x);
    int a;
    int final = 0;

// 循环
    while(x > 0){
        a = x%10;
        final = final*10 + a;
        // printf("x=%d,a=%d,final=%d\n",x,a,final);
        x /= 10;
    }
// 输出
    printf("对这个整数求逆得:%d",final);

    return 0 ;
}