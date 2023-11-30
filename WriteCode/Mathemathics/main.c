#include <stdio.h>

int main() {
    int n, m, lcm, i, gcd;
    scanf("%d %d", &n, &m);
    
    for (i = 1; i <= n && i <= m; i++) {
        if (n % i == 0 && m % i == 0) gcd = i;
    }
    
    i = 0;
    for (i = n * m; i >= 1; i--) {
        if (i % n == 0 && i % m == 0) lcm = i;
    }
    
    printf("%d\n%d", gcd, lcm);
    
    return 0;
}
