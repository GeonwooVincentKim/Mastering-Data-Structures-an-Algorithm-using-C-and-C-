#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n % 2 == 0) printf("Duck");
    else if (n % 2 == 1) printf("Goose");
    
    return 0;
}