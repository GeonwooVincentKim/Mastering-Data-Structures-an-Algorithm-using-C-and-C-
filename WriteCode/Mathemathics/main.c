#include <stdio.h>

int main() {
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    
    if (n % (m + 1) == 1) printf("Can't win");
    else printf("Can win");
    
    return 0;
}