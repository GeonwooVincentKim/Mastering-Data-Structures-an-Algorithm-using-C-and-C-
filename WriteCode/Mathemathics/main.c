#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);
    
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("%d", i);
            n /= i;
            
            if (n % i == 0) printf("\n");
            else if (n % i != 0) {
                if (n > i) printf("\n");
            }
            
            i = 1;
        }
    }
    
    return 0;
}