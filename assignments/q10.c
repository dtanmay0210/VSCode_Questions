#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            if (r == 0 || r == n - 1 || c == 0 || c == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}