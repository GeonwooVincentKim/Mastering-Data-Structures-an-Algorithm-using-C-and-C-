#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i, result;
    for (i = n; i > 0; i--) {
        result = result * i;
    }
    
    printf("%d", result);
    
    return 0;
}