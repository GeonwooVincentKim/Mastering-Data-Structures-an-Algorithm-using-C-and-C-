#include <stdio.h>

int main() {
    int i, n;
    int sum = 0, count = 0;
    int sumArr[10];
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        sumArr[i] = (n % 42);
    }
    
    int j, k;
    for (j = 0; j < 10; j++) {
        count = 0;
        for (k = 0; k < j; k++) {
            if (sumArr[j] == sumArr[k]) count++;
        }
        
        if (count == 0) sum += 1;
    }
    
    printf("%d", sum);
    return 0;
}