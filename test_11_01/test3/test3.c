#include<stdio.h>

int main(void)
{
    char ac[] = {1,2,3,4,5,6,7,8,9,-1,};
    char *p = ac;
    int i;
    for(i=0; i<sizeof(ac)/sizeof(ac[0]); i++){
        printf("%d\n",ac[i]);
    }
    // for(p=ac; *p!=-1; p++){
    //     printf("%d\n",*p++);
    // }
    while(*p!=-1){
        printf("%d\n",*p++);
    }
    int ai[] = {1,2,3,4,5,6,7,8,9,};
    int *q = ai;
    q = p;

    return 0;
}