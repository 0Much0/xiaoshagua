// 求素数的和
#include<stdio.h>

// 定义了一个求素数的函数isTrue
int isTrue(int i){
    int ret = 1;
    int k;
    for (k=2; k<i-1; k++){
        if (i%k == 0){
            ret = 0;
            break;
        }
    }

    return ret;
}

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
        
        if (isTrue(i)){
        sum += i;
        cnt++;
        // printf("%d %d\n",cnt,sum);
        }
    }
    printf("%d %d\n",cnt,sum);

    return 0;
}