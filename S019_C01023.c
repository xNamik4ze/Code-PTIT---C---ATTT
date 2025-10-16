#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        int max = 0;
        int min = 10;
        while (n > 0) {
            int temp = n % 10;
            if (temp > max) max = temp;
            if (temp < min) min = temp;
            n /= 10;
        }
        printf("%d %d\n", max, min);
    }
    return 0;
}