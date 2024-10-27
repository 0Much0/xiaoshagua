 #include<stdio.h>

// void不返回
// void sum(int a,int b); // 函数的原型(头+;)声明
void sum(int ,int ); // 可以不用写定义的

int main()
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}

void sum(int a,int b) // 定义
{
    int i;
    int sum = 0;
    for(i=a;i<=b;i++){
        sum += i;
    }
    printf("%d到%d的和为:%d\n",a,b,sum);
}