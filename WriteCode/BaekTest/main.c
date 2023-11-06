#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i;
    for (i = 0; i < n; i++) {
        if ((i + 1) == n)
            printf("%d", (i + 1));
        else
            printf("%d\n", (i + 1));
    }
 
    return 0;
}