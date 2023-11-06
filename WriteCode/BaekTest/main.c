#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i, result = 1;
    for (i = 2; i <= n; i++) {
        result = result * i;
    }
    
    printf("%d", result);
    
    return 0;
}