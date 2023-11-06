#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i, sum = 0;
    char array[n];
    
    scanf("%s", array);
    
    for (i = 0; i < n; i++) {
        sum += array[i] - '0';
    }
    
    printf("%d", sum);
    
    return 0;
}