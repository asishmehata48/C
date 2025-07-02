#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skips the current iteration when i is 3
        }
        printf("%d\n", i);
    }
    return 0;
}
