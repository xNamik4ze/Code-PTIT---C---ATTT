#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int first = n % 10, last = n, count = 0;
    while(last > 9) {
        last /= 10;
        count ++;
    }
    int dif = (last - first) * pow(10, count);
    n = n - dif + (last - first);
    printf("%d", n);
    return 0;
}