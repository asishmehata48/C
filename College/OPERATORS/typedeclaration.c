#include<stdio.h>
int main() {
int age = 22;
int oldAge = age;
int newAge = oldAge + 2;
printf("new age is : %d", newAge);
int rupee = 1, dollar;
dollar = 74;
/*
order of declaration is important - Wrong Declaration Order
float pi = 3.14;
float area = pi * rad * rad;
float rad = 3;
*/

// valid declaration
int age1, age2, age3;
age1 = age2 = age3 = 22;
//invalid
//int a1 = a2 = a3 = 22;
return 0;
}