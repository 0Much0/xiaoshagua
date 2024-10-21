#include<stdio.h>

int main()
{
// 输入
    int N;
    printf("输入正整数N的值为:");
    scanf("%d",&N);
    int i = 1;
    for(;i<=N;i++){
        int j = 1;
        for(;j<=i;j++){
            printf("%d*%d=%d",j,i,i*j);
            if(i*j<10){
                printf("   ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}