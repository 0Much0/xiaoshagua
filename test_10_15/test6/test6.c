# include<stdio.h>

int main()
{
    int num;
// 初始化
    int sum = 0;
    int count = 0;

// 输入要计算的成绩
    printf("请输入成绩计算平均值(输入-1进行计算):\n");
    scanf("%d",&num);
// 循环，把输入的成绩相加
    while(num != -1){
        sum += num;
        count++;
        scanf("%d",&num);
    }
// 计算平均成绩并输出
    printf("这%d位的成绩计算的平均成绩为%.2f\n",count,1.0*sum/count);

    return 0;
}
