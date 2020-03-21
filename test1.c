#include<stdio.h>
int main()
{

    int i=0,sum=0;
    for(;i<10;i++){
        printf("sum=%d\n",sum+=i);
    }
    return 0;
}