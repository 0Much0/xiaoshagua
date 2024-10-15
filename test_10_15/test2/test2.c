#include<stdio.h>

int main()
{
    int score = 0;
// 输入
    printf("请输入百分制成绩:");
    scanf("%d",&score);
    /*// 另一种写法
    int score = 0;
    printf("请输入百分制成绩:");
    scanf("%d",&score);
    if (score >= 90){
        printf("五分制成绩为:A");
    }else if(score >= 80){
        printf("五分制成绩为:B");
    }else if(score >= 70){
        printf("五分制成绩为:C");
    }else if(score >= 60){
        printf("五分制成绩为:D");
    }else{
        printf("五分制成绩为:E");
    }
    */
// 判断从哪个case进入
    int sc = score/10;
    switch (sc){
        case 10:
        case 9:
            printf("五分制成绩为:A\n");
            break;
        case 8:
            printf("五分制成绩为:B\n");
            break;
        case 7:
            printf("五分制成绩为:C\n");
            break;
        case 6:
            printf("五分制成绩为:D\n");
            break;
        default:
            printf("五分制成绩为:E\n");
            break;
    }

    return 0;
}