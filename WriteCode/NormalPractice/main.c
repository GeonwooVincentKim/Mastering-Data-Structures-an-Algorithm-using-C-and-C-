#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i, a, b;
    for (i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d:%d\n", i + 1, a + b);
        
        a = 0;
        b = 0;
    }
    
    return 0;
}