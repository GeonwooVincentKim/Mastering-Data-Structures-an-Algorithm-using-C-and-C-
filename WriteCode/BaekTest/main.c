#include <stdio.h>

int main() {
    int n;
    int v, count = 0;
    int arr[100];
    
    scanf("%d", &n);
    
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &v);
    
    int j;
    for (j = 0; j < n; j++) 
        if (arr[j] == v) {
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}