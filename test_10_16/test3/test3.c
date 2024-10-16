// 输出100以内的素数
#include<stdio.h>

int main(){
    int x;
// 输入
    printf("输出100以内的素数:");
    // scanf("%d",&x);
    x = 2;

    for (x=2; x<100; x++){
        int i;
// 判断x为素数
        int isTrue = 1;
//循环
        for (i=2; i<x; i++){
            if (x%i == 0){
                isTrue = 0;
                break;
            }
        } 
//输出  
        if (isTrue == 1){
            printf("%d  ",x);
        }
    }
    printf("\n");

    return 0;
}