// 计算int类型的最大数可以是多少
#include<stdio.h>

int main()
{
    int a = 0,b = 0;
    // 第一个while循环：找到int类型的最大值
    while (++a>0);
    // 结束循环时a会超出正数范围，值会变为负数
    printf("int类型的最大数为:%d\n",a-1);// a - 1 即为 int 类型的最大值
    b++;// 数位计数器，至少有一位
    while (a=a/10)// 通过连续除以10，计算最大值有多少位
    {
        printf("%d");
        b++;
    }
    
    printf("int类型的最大数的数位为:%d位",b);

    return 0;
}