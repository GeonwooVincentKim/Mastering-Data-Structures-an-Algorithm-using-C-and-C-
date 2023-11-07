#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    int i, index, a = 0;
    int arr[9];
    
    for (i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        
        if (a < arr[i]) {
            a = arr[i];
            index = i;
        }
    }
        
    printf("%d\n%d", a, index + 1);

    return 0;
}