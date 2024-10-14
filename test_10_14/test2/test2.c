// 找零计算器
#include<stdio.h>
int main()
{
    int price = 0; //初始化
    int bill = 0;
    int elbill = 0;
    printf("请输入金额:");
    scanf("%d", &price); //输入
    printf("请输入票额:");
    scanf("%d", &bill);
    if (bill >= price){
        printf("应找您:%d元\n", bill - price);
        printf("欢迎下次光临!");
    }else{
        printf("您的钱不够");
    }

    return 0;
}