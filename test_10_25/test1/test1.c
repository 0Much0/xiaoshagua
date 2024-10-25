#include<stdio.h>

int main()
{
    int a;
    char c;
    scanf("%c",&a);// scanf不能处理char类型的数
    c = a;
    printf("c=%d\n",c);// ASCII编码
    printf("c='%c'\n",c);
    if(49 == '1'){
        printf("ok");
    }

    return 0;
}