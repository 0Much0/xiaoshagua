#include<stdio.h>

int main()
{
    // 强制转换，short能表达的最大数为32767，结果是计算出来的新值
    printf("%d\n",(short)32768);
    int i = 32768;
    short s = (short)i;
    printf("%d\n",i);

    return 0;
}