#include<stdio.h>
int main()
{
    int now = 0; //初始化
    int pass = 0;
    scanf("%d %d", &now,&pass); //输入
    int hour = (now/100 + pass/60) + (now%100 + pass%60)/60;
    int min = (now%100 + pass%60)%60;
    int final = (hour*100 + min);
    printf("%d",final); //输出

    return 0;
}