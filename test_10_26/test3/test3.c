#include<stdio.h>

// void不返回
void sum(int a,int b)
{
    int i;
    int sum = 0;
    for(i=a;i<=b;i++){
        sum += i;
    }
    printf("%d到%d的和为:%d\n",a,b,sum);
}

int main()
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}