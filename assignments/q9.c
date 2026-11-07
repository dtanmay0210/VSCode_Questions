#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        for (int star = 0; star < 2 * (n - i) - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}