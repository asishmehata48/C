#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d%d", &a,&b);
    if(a>b)
    {
        printf("b is smallest");
    }
    else
    {
        printf("a is smallest");
    }
    return 0;
}