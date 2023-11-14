#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i, k, count = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &k);
        
        int j;
        for (j = 2; j <= k; j++) {
            if (k == j) count++;
            if (k % j == 0) break;
        }
    }
    
    printf("%d", count);
    return 0;
}
