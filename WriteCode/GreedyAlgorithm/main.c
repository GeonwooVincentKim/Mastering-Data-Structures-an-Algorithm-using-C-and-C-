#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    scanf("%d", &n);
    
    int greedyList[4] = {25, 10, 5, 1};
    
    int m;
    for (j = 0; j < n; j++) {
        scanf("%d", &m);
        for (i = 0; i < sizeof(greedyList) / sizeof(int); i++) {
    //        printf("%d ", greedyList[i]);
            printf("%d ", m / greedyList[i]);
            count += m / greedyList[i];
            m %= greedyList[i];
        }
//        printf("%d\n", count);
    }

    
    return 0;
}