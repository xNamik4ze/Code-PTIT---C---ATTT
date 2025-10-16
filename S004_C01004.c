#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        printf("%.15f\n", 1.0 / n);
    }
    return 0;
}