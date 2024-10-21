#include<stdio.h>

int main()
{
// 输入
    int N;
    printf("请输入一个正整数N(3<=N<=7)求N位的水仙花数并列出:\n");
    scanf("%d",&N);
//  遍历
    int i = 1;
    int j = 1;
// j = 10^N
    for(; i<N; i++){
        j *= 10;
    }
    i = j;
    for(; i<10*j; i++){
        int a = i;
        int sum = 0;
        for(; a>0;){
            int b = a%10;
            a /= 10;
            int c = b;
            int cnt = 1;
// c^3
            for(; cnt<N; cnt++){
                c *= b;
            }
            sum += c;
        }
        if(sum == i){
            printf("%d\n",i);
        }
    }

    return 0;
}