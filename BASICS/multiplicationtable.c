#include<stdio.h>
int main()
{
    int n, table = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    // for (int i =1; i<=10; i++)
    // {
    //     table = n * i;
    //     printf("%d\n ", table);
    // }

    for (int i = 1; i <=10; i++)
    {
        printf("%d \n", n*i);
    }
    return 0;
}
