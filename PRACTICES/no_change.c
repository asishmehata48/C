//function call by value
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a =1;
    void try_to_change_it(int);

    printf("%d\n", a); //1 is printed
    try_to_change_it(a);
    printf("%d\n", a); //1 is printed again
    return 0;
}

void try_to_change_it(int a)
{
    a= 777;
}