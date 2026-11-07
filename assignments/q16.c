#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    // Upper half including middle row
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int star = 0; star < 2 * i - 1; star++) printf("*");
        printf("\n");
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int star = 0; star < 2 * i - 1; star++) printf("*");
        printf("\n");
    }
    return 0;
}