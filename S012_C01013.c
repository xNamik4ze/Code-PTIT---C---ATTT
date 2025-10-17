#include <stdio.h>

int main() {
    int n, max = 0, min = 99999999;
    while (scanf("%d", &n) == 1) {
        if (n > max) max = n;
        if (n < min) min = n;
    }
    printf("%d %d", max, min);
    return 0;
}