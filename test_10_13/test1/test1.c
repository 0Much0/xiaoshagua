#include<stdio.h>
int main()
{
    int cm = 0; //初始化
    scanf("%d", &cm); //输入
    int foot = cm / 30.48; //1m=100cm
    int inch = ((cm / 30.48) -foot)*12;
    printf("%d %d",foot,inch); //输出

    return 0;
}