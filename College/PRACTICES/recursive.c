#include<stdio.h>
#include<conio.h>
void printHello(int count);

int main()
{
    printHello(10);
    return 0;
}

void printHello(int count)
{
    if(count == 0)
    {
        return;
    }

    printf("Hello world \n");
    printHello(count-1);
}