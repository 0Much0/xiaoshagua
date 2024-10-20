#include<stdio.h>

int main()
{
// 输入
    int A;
    int i,j,k;
// cnt一般定义作计数器,这里赋值为0
    int cnt = 0;
    printf("请输入A(A为不超过6的正整数)的值为:");
    scanf("%d",&A);
    i = A;
// 循环
    if(i<7){
        for(; i<=A+3; i++){
            j = A;
            for(; j<=A+3; j++){
                k = A;
                for(; k<=A+3; k++){
                    // if(i!=j){
                    //     if(i!=k){
                    //         if(j!=k){
                    //             cnt++;
                    //             printf("%d%d%d",i,j,k);
                    //             if(cnt == 6){
                    //                 printf("\n");
                    //                 cnt = 0;
                    //             }else{
                    //                 printf(" ");
                    //             }
                    //         }
                    //     }
                    if(i!=j && i!=k && j!=k){
                        cnt++;
                        printf("%d%d%d",i,j,k);
                        // if(cnt==6 || cnt==12 || cnt==18){
                        //     printf("\n");
                        // }else{
                        //     printf(" ");
                        //     }
                        if(cnt == 6){
                            printf("\n");
                            cnt = 0;
                        }else{
                            printf(" ");
                            }
                    }
                }
            }
        }
    }else{
        printf("错误!请输入不超过6(包括6)的正整数。请重启程序!");
    }

    return 0;
}