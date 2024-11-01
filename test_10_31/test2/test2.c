#include<stdio.h>

int divide(int a,int b,int *result);

int main()
{
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    if(divide(a,b,&c)){
        printf("%d/%d=%d\n",a,b,c);
    }

    return 0;
}

int divide(int a,int b,int *result)
{
    int ret = 1;
    if(b==0) ret = 0;
    // 只能做整数除法，结果为整数
    else *result = a/b;
    return ret;
}