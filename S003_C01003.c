#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t-- > 0) {
        int n;
        scanf("%d", &n);
        printf("%d\n", n * n);
    }
    return 0;
}