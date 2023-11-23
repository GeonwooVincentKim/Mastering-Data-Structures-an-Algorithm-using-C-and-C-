#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int i0, i1, storeValue[101], i, j, k;
    for (i0 = 0; i0 < m; i0++) {
        scanf("%d %d %d", &i, &j, &k);
     
        for (i1 = i; i1 <= j; i1++)
            storeValue[i1] = k;
    }

    for (int i2 = 1; i2 <= n; i2++) {
        printf("%d ", storeValue[i2]);
    }
    
    return 0;
}
