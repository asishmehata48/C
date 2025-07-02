# include <stdio.h>
int main() {
int a = 10;
a += 10;
printf("a+10 = %d \n", a);
a -= 10;
printf("a-10 = %d \n", a);
a *= 10;
printf("a*10 = %d \n", a);
a /= 10;
printf("a/10 = %d \n", a);
a %= 10;
printf("a%c10 = %d \n", '%', a);
return 0;
}