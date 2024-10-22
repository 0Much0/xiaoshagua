#include<stdio.h>

int main()
{
// 输入
    int x;
    printf("请输入要输出为拼音的整数为:");
    scanf("%d",&x);
    int a = x,b = x;
    int cnt = 1;
    int i;
// 判断输入的整数是正整数或负整数或0
    if(x<0){
        printf("fu ");
        x = -x;
        a = -a;
        b = -b;
    }
// 循环求得该整数有几位，cnt即为10的几次方
    while(a>=10){
        a/=10;
        cnt*=10;
    }
// 循环求从最高位开始，每一位的数字是多少
    for(;cnt>0;){
        i = b/cnt;
        b %= cnt;
        cnt/=10;
// switch选择输出
        switch (i){
            case 0:
                printf("ling");
                break;
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
        }
// 判断是否要输出空格
        if(cnt>1/10){
            printf(" ");
        }
    }

    return 0;
}