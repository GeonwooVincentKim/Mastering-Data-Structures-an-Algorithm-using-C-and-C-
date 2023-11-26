#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    while (n > 0) {
        if (n % 5 == 0) {
            count++;
            n -= 5;
        } else {
            count++;
            n -= 3;
        }
    }
    
    if (n != 0 || count == 0) printf("-1");
    else printf("%d", count);
    
    return 0;
}
