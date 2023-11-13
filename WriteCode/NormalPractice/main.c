#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i, gap;    
    for (i = 1; i <= n; i++) {
        gap = i + 1;
        if (30 % gap == 0) printf("%d\n", i);
    }

    return 0;
}
