#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int i, count = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) count++;
        if (count == k) break;
    }
    
    if (i <= n) printf("%d", i);
    else printf("0");
}