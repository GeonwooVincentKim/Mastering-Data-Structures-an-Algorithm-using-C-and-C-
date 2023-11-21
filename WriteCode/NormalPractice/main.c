#include <stdio.h>
#include <stdbool.h>

int euclid(int a, int b, int cnt) {
    int big = (a >= b) ? a : b;
    int small = (a >= b) ? b : a;
    
    if (big % small == 0) return ++cnt;
    if (big - small < small) return euclid(small, big % small, ++cnt);
    else return ++cnt;
}


int main() {
    while(1) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        if (a == 0 && b == 0) break;
        
        if (euclid(a, b, 0) & 1) printf("A wins\n");
        else printf("B wins\n");
    }
    
    return 0;
}
