#include<stdio.h>

int main()
{
    char c1, c2, c3;
    int i;
    float x;
    double y;

    printf("\n %s \n%s", "Input three characters, "
    "an int, a float, a double: ");
    scanf("%c%c%c%d%f%lf", &c1, &c2, &c3, &i, &x, &y);
    printf("\n Here is the data that you typed in :\n");
    printf("%3c%3c%3c%5d%17e%17e\n\n", c1, c2 ,c3, i , x, y);
    return 0;
}