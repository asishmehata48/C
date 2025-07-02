#include <stdio.h>

int stringLength(char *str) {
    char *p = str;
    while (*p != '\0') {
        p++;
    }
    return p - str;
}

int main() {
    char str[] = "Hello, world!";
    int len = stringLength(str);
    printf("Length of the string = %d\n", len);
    return 0;
}
