#include<stdio.h>
int main()
{
    int a,b,c;
    float average;
    printf("Enter the values of a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    average =(a+b+c)/3;
    printf("The average is %f", average);
    return 0;
}