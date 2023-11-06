#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    
    if (n > m)
        printf("%lld", n - m);
    else
        printf("%lld", m - n);
    
    return 0;
}