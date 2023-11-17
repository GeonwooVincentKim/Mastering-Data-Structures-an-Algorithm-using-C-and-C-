#include <stdio.h>

int main() {
    int a, b;
    
    while (1) {
        scanf("%d %d", &a, &b);
        int a1 = a, b1 = b;
        if (a1 == 0 && b1 == 0) break;
        
        if (a1 <= b1) {
            if (b1 % a1 == 0) printf("factor\n");
        } else {
            if (a1 % b1 == 0) printf("multiple\n");
            else printf("neither\n");
        }
    }

    return 0;
}