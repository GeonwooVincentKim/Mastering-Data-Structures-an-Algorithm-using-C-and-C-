#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int i, target_value = x;
    int n_arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &n_arr[i]);
        
        if (n_arr[i] < target_value) {
            printf("%d ", n_arr[i]);
        }
    }
    
    return 0;
}