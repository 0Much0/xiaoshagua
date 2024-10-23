#include<stdio.h>

int main()
{
// 输入
    int a,n;
    printf("请分别输入a n的值为:");
    scanf("%d %d",&a,&n);
// 初始化
    int i = 0;
    int sum = 0;
// 循环求n个a相加的每一项是i
    for(;n>0;n--){
        i = 10*i+a;
        sum += i;
        printf("%d ",i);
    }
// 输出
    printf("%d",sum);

    return 0;
}