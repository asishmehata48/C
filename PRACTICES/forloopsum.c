#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("ENter the number: ");
    scanf("%d", &n);

//FORWARD
    // for (int i= 1; i<=n; i++)
    // {
    //     sum = sum + i;
    
    // }
    // printf("Sum = %d ", sum);

//REVERSE 
    for (int i = n; i>=1; i--)
    {
        sum = sum + i;
        
    }
    printf("The sum is %d", sum);
    return 0;
}
