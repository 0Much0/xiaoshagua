// 短路,如果左边结果已经能决定结果，右边就不会继续进行
#include<stdio.h>

int main()
{
    int a = -1;
    if(a>0 && a++>1){
        printf("OK\n");
    }
    printf("%d\n",a);

    return 0;
}