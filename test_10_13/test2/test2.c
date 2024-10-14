#include<stdio.h>
int main()
{
    int now = 0; //初始化
    int pass = 0;
    printf("请以'四位整数+任意整数'的形式输入，表示起始的时间+流逝的分钟数:");
    scanf("%d %d", &now,&pass); //输入
    int hour = (now/100 + pass/60) + (now%100 + pass%60)/60;
    int min = (now%100 + pass%60)%60;
    if (min<0){
        min = 60 + min;
        hour--;
    }
    int final = (hour*100 + min);
    printf("%d",final); //输出

    return 0;
}