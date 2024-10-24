// #include<stdio.h>

// int main()
// {
//     char c = -1;
//     int i = -1;
//     printf("c=%u,i=%u\n",c,i);// 输出的数为unsigned int 能表示的最大数

//     return 0;
// }


#include<stdio.h>

int main()
{
    char c = 012;
    int i = 0x12;
    int j = 0x1A;
    printf("c=%d,i=%d\n",c,i);// 输出的数会把八进制转化为十进制
    printf("c=%o,i=%x\n",c,i);// 输出八进制%o,16进制%x
    printf("j=0x%x\n",j);// x小写输出小写，X大写输出大写
    printf("j=0x%X\n",j);

    return 0;
}
