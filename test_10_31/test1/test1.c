#include<stdio.h>

void minmax(int a[],int len,int *min,int *max);

int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,};
    int min,max;
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);// 传递指针
    printf("min=%d,max=%d\n",min,max);
    
    return 0; 
}

void minmax(int a[],int len,int *min,int *max)
{
    // 处理空的情况
    if(len<=0){
        return;
    }
    int i;
    *min = *max = a[0];
    for(i=1; i<len; i++){
        if(a[i]<*min){
            *min = a[i];
        }
        if(a[i]>*max){
            *max = a[i];
        }
    }
}