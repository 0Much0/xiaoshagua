// 判断是否为素数 test_10_16_test2.c
// 求素数的和
#include<stdio.h>

int main(){
    int x,y;
    int sum = 0;
    int cnt = 0;
// 输入
    scanf("%d %d",&x,&y);
    int i;
    if(x == 1) x = 2;
    for(i=x; i<=y; i++){
// 求素数
        int isTrue = 1;
        int k;
        for (k=2; k<i-1; k++){
            if (i%k == 0){
                isTrue = 0;
                break;
            }
        }
        if (isTrue == 1){
        sum += i;
        cnt++;
        // printf("%d %d\n",cnt,sum);
        }
    }
    printf("%d %d\n",cnt,sum);

    return 0;
}