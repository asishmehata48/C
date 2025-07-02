#include<stdio.h>
#include<stdlib.h>

float maximum(float x, float y);
float minimum(float x, float y);
void prn_info(void);

int main()
{
    int i, n;
    float max, min, x;

    prn_info();
    printf("Input n: ");
    scanf("%d", &n);
    printf("\n Input %d real numbers: ", n);
    scanf("%f", &x);
    max =min =x;
    for (i =2; i<=n; ++i)
    {
        scanf("%f", &x);
        max = maximum ( max, x);
        min = minimum (min, x);
    }
    printf("\n %s%11.3f\n%s%11.3f\n\n",
    "Maximum value: ", max,
    "Minimum value: ", min);
    return 0;
}

float maximum(float x, float y)
{
    if (x>y)
    return x;
    else
    return y;
}
float minimum (float x, float y)
{
    if (x<y)
    return x;
    else
    return y;
}

void prn_info(void)
{
    printf("\n%s\n%s\n\n",
    "This program reads an integer vlaue for n, and then",
    "Processs n real numbers to find max and min values.");
}