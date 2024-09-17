#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // Exits the loop when i is 3
        }
        printf("%d\n", i);
    }
    return 0;
}