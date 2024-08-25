#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n>0)
    {
        printf("%d is a natural number",n);
    }
    else
    {
        printf("%d is not natural number",n);
    }
    return 0;
}