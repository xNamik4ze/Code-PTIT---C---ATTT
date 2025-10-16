#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        
        int first = n % 10;
        while (n > 9) n /= 10;
        
        if (first == n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}