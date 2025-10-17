#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int res = (a + b) * (b - a + 1) / 2;
    printf("%d", res);
    return 0;
}