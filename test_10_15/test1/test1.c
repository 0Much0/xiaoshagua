// 三个数取最大值
#include<stdio.h>

int main()
{
    int a,b,c;
//输入
    printf("请输入三个数字比较大小:");
    scanf("%d %d %d",&a,&b,&c);
    int max = 0;
//判断最大值
    if(a>b){
        if(a>c){
            max = a;
        }else{
            max = c;
        }
    }else{
        if(b>c){
            max = b;
        }else{
            max = c;
        }
    }
//输出
    printf("三个数中的最大值是:%d\n",max);

    return 0;
}