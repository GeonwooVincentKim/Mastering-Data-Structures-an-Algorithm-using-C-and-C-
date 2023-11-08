#include <stdio.h>

int isAscending(int *arr, int size) {
    int i, val;
    val = arr[0];
    
    for (i = 1; i < size; ++i) {
        if (val > arr[i]) return 0;
        val = arr[i];
    }

    return 1;
}

int isDescending(int *arr, int size) {
    int i, val;
    val = arr[0];
    
    for (i = 1; i < size; ++i) {
        if (val < arr[i]) return 0;
        val = arr[i];
    }
    
    return 1;
}

int main() {
    int arr[8];
    
    int i, val;
    int a, b;
//    char[] result = "";
    
    for (i = 0; i < 8; i++){
        scanf("%d", &arr[i]);
        val = arr[0];
    }
    
    a = isAscending(arr, 8);
    b = isDescending(arr, 8);
    
    printf("%d %d", a, b);
    
    if (a == 1) printf("ascending");
    if (b == 1) printf("descending");
    if (a == 0 && b == 0) printf("mixed");
    
    
//    printf("%s", 
    
//    for (i = 0; i < 8; i++) {
//        printf("%d ", arr[i]);
//    }
//    for (i = 0; i < 8; i++) {
//        if (val > arr[i]) printf("ascending");
//        else if (val < arr[i]) printf("descending");
//        else printf("mixed");
//    }
    
//    printf("%d", arr[0]);
    
    return 0;
}