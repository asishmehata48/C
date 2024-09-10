#include<stdio.h> //Header file
int main() //main funtion 
{
    int l, b, peri; //integer data type
    printf("Enter length and breadth of rectangle :");
    scanf("%d%d", &l,&b);
    peri =2*(l+b); //Calculation
    printf("The perimeter is %d", peri);
    return 0;
}