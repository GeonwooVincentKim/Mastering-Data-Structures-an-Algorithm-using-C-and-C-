#include <stdio.h>

int stConvertArr[10];

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    int temp;
    temp = a * b * c;

    int i, j;
    for (i = temp; i > 0; i /= 10) 
        stConvertArr[i % 10]++;
    
    for (j = 0; j < 10; j++) 
        printf("%d\n", stConvertArr[j]);
    
    return 0;
}
