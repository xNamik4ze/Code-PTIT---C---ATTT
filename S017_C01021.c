#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n > 9) {
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    sum += n;
    printf("%d", sum);
    return 0;
}