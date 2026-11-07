#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    // Upper half (rows 1 to n/2 + 1)
    for (int i = 1; i <= (n / 2) + 1; i++) {
        int stars = i;
        int spaces = n - 2 * stars;
        for (int j = 0; j < stars; j++) printf("*");
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }
    // Lower half (rows n/2 down to 1)
    for (int i = n / 2; i >= 1; i--) {
        int stars = i;
        int spaces = n - 2 * stars;
        for (int j = 0; j < stars; j++) printf("*");
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }
    return 0;
}