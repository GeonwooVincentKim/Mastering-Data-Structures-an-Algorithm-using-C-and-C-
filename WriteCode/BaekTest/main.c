#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    
    int i, a, b, sum = 0;
    for (i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("%d\n", sum);
        sum = 0;
    }
    
    return 0;
}