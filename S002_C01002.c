#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long n;
        scanf("%lld", &n);
        long long res = n * n;
        printf("%lld\n", res);
    }
    return 0;
}