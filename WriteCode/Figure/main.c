#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i, sum;

    for (i = 0; i < n; i++) {
        int temp = i;
        int sum = i;
        
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        
        if (sum == n) {
            printf("%d", i);
            n = 0;
            break;
        }
    }
    
    if (n != 0) printf("0");
    
    return 0;
}