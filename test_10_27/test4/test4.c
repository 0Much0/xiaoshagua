#include<stdio.h>

int main(void)
{
    const int number = 10;
    int x;
    int count[number];
    int i;

    // 初始化数组
    for(i=0; i<number; i++){
        count[i] = 0;
    }
    printf("输入0-9的数字,判断它们分别出现了几次(输入-1退出程序):\n");
    scanf("%d",&x);
    // 循环,判断0-9出现的次数
    while (x != -1)
    {
        if(x>=0 && x<=9){
            count[x]++;
        }
        scanf("%d",&x);
    }
    // 遍历数组，输出
    for(i=0; i<number; i++){
        printf("这些数字中,%d出现了:%d次\n",i,count[i]);
    }
    

    return 0;
}