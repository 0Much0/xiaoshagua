// 猜数
# include <stdio.h>

int main ()
{
// 取一个随机数
    srand(time(0));
    int num = rand()%100+1;
// 初始化
    int sum = 0;
    int count = 0;
// 用户输入猜的数字
    printf("我这有个100以内的正整数,猜猜这个数字多大?\n");
// 循环
    while (sum != num)
    {
        scanf("%d",&sum);
        count++;
        if(sum > num){
            printf("猜大了点\n");
        }else if(sum < num){
        printf("猜小了点\n");    
        }
    }
/*// do while写法
    do{
        scanf("%d",&sum);
        count++;
        if (sum > num){
        printf(""猜大了点\n"");
        }else if(sum < num){
        printf("猜小了点\n");
        }
    }while(sum != num);
*/
// 输出猜了几次
    printf("猜对了，你猜了%d次，你真棒!",count);

    return 0;
}