#include<stdio.h>

int main()
{
    double ff = 1234.56789;
    double fff = 1E-10;
    printf("%e  %f\n",ff,ff);// %e为科学计数法
    printf("%E  %.16f\n",fff,fff);
    printf("%.3f\n",-0.0049);// 四舍五入
    printf("%.30f\n",-0.0049);// 计算机内部不能精确表达
    printf("%.3f\n",-0.00049);

    return 0;
}