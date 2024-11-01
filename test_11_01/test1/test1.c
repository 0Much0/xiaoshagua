#include<stdio.h>

int main(void)
{
    char ac[] = {1,2,3,4,5,6,7,8,9,};
    char *p = ac;
    char *p1 = &ac[5];
    // +1是+1个字节
    printf("p = %p\n",p);
    printf("p+1 = %p\n",p+1);
    // *(p+n) <->ac[n];
    printf("p1-p = %d\n",p1-p);
    int ai[] = {1,2,3,4,5,6,7,8,9,};
    int *q = ai;
    int *q1 = &ai[6];
    // +1是+4个字节sizeof(int)
    printf("q = %p\n",q);
    printf("q+1 = %p\n",q+1);
    printf("q1-1 = %d\n",q1-q);

    return 0;
}