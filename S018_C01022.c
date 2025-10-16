#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        long long n;
        scanf("%lld", &n);
        int sum = 0;
        while (n > 9) {
            int temp = n % 10;
            sum += temp;
            n /= 10;
        }
        sum += n;
        printf("%d\n", sum);
    }
    return 0;
}