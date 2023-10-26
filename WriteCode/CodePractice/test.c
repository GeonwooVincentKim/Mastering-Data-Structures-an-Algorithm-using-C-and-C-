#include <stdio.h>

int main() {
//    int A[] = {2, 4, 6, 8, 10, 12, 14};  // Place 4 bytes by each location
    int A[10] = {0};
    
    for (int i = 0; i < 10; i++) 
        printf("%d\n", A[i]);
    
//    printf("%lu\n", sizeof(A));
//    printf("%d\n", A[2]);
//    printf("%d\n", A[3]);
    
    return 0;
}
