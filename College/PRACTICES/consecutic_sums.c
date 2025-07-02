#include<stdio.h>
int main(void)
{
    int i = 1, sum =0;

    while(i<=5){
        sum +=i;
        ++i;
    }
    printf("sum = %d\n", sum);
    return 0;
}