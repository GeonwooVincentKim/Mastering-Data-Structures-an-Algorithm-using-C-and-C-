#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int line1st = b % 10 * a;
    int line2nd = (b % 100) / 10 * a;
    int line3rd = (b / 100) * a;
    
    printf("%d\n%d\n%d\n%d", line1st, line2nd, line3rd, a * b);
}