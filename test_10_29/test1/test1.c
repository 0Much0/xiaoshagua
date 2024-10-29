#include<stdio.h>

int istrue(int x);

int main(void)
{
    int x;
    scanf("%d",&x);
    if(istrue(x)){
        printf("%d是素数\n",x);
    }else{
        printf("%d不是素数\n",x);
    }

    return 0;
}

int istrue(int x)
{
    int ret = 1;
    int i;
    // if(x == 1) ret = 0;
    // for(i=2; i<x; i++){
    //     if(x%i == 0){
    //         ret = 0;
    //         break;
    //     }
    // }
// 去除偶数
    if (x==1 || (x%2==0 && x!=2)) ret=0;
    // for(i=3; i<x; i+=2){
    //     if(x%i == 0){
    //         ret = 0;
    //         break;
    //     }
    // }
// 走到x的平方根
        for(i=3; i<=sqrt(x); i+=2){
            if(x%i == 0){
                ret = 0;
                break;
            }
        }

    return ret;
}