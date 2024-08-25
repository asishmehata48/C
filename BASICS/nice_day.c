// Have a nice day !

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXSTRING 100

int main(void)
{
    char c, name[MAXSTRING];
    int i, sum= 0;

    printf("\n Hi! What's your Name?");
    for (i =0; (c= getchar()) !='\n' ; ++i)
    {
        name [i]=c;
        if (isalpha(c))
        sum += c;
    }
    name [i] = '\0';
    printf("\n%s%s%s\n%s",
    "Nice to meet you", name , "."
    "Your name spelled backwards is ");
    for (--i; i>= 0; --i)
    putchar (name[i]);
    printf("\n%s%d%s\n\n%s\n",
    "and the letters in your name sum to", sum,
    ". ", "Have a nice day!");
    return 0;

}