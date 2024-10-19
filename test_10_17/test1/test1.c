#include<stdio.h>

int main()
{
    int x;
    int one,two,five;
// 初始化
    int exit = 0;
// 输入
    printf("输入一个10以内的货币面值，求分别需要几个1角，2角，5角组成:");
    scanf("%d",&x);

// 循环
    for(one=1; one<10*x; one++){
        for(two=1; one<10*x/2; two++){
            for(five=1; five<10*x/5; five++){
                if(one+two*2+five*5 == 10*x){
                    printf("%d个1角%d个2角%d个5角可以得到%d元\n",one,two,five,x);
                    exit = 1;
                    break;
                }
            }
            if(exit)break; // if(exit == 1)break;
        }
        if(exit)break;
    }

    return 0;
}