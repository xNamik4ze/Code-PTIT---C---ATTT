#include <stdio.h>
#include <math.h>

int main() {
    int m , n;
    scanf("%d %d", &m, &n);

    int bot = ceil(sqrt(m));
    int top = floor(sqrt(n));

    int count = top - bot + 1;
    printf("%d\n", count);
    for (int i = bot; i < top + 1; i++) printf("%d\n", i * i);
    
    return 0;
}
