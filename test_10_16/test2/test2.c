// 判断是否为素数
#include<stdio.h>

int main(){
    int x;
// 输入
    printf("输入一个数字判断是否为素数:");
    scanf("%d",&x);
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
        printf("是素数\n");
    }else{
        printf("不是素数\n");
    }

    return 0;
}