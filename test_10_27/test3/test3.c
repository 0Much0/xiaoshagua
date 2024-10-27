#include<stdio.h>

int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    // 输入的数字不能超过100个,从number[0]到number[99]
    int number[100];
    scanf("%d",&x);
    // 把输入的数填入数组number[100]
    while(x != -1){
        if (cnt < 100){
           number[cnt] = x;
            sum += x;
            cnt++;
            scanf("%d",&x); 
        }
    }
    // 计算平均数是多少
    if(cnt > 0){
        printf("输入的这些数的平均数为:%.2f\n",sum/cnt); // .2f表示保留两位小数
        int i;
        // 遍历数组，判断哪些数大于平均数
        for(i=0; i<cnt; i++){
            if(number[i] > sum/cnt){
                printf("%d\n",number[i]);
            }
        }
    }

    return 0;
}