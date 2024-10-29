#include<stdio.h>

int main(void)
{
    int a[] = {[1]=2,4,[5]=6};
    {
        int i;
        printf("%lu\n",sizeof(a)); // a有多大
        printf("%lu\n",sizeof(a[0])); // a的单元
        for (i=0; i<sizeof(a)/sizeof(a[0]); i++){ //条件求得不会随数据改变而改变
            printf("%d\t",a[i]);
        }
        printf("\n");
    }

    return 0;
}