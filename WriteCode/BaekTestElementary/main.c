#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    int temp;
    temp = a * b * c;
    
    char stConvertArr[20];
    sprintf(stConvertArr, "%d", temp);
    
    printf("%s\n", stConvertArr);
    
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    
    int i;
    for (i = 0; stConvertArr[i] != '\0'; i++) {
        printf("%d", stConvertArr[i]);
        
        if (stConvertArr[i] == 1) {
            count1++;
        } else if (stConvertArr[i] == 2) {
            count2++;
        } else if (stConvertArr[i] == 3) {
            count3++;
        } else if (stConvertArr[i] == 4) {
            count4++;
        } else if (stConvertArr[i] == 5) {
            count5++;
        } else if (stConvertArr[i] == 6) {
            count6++;
        } else if (stConvertArr[i] == 7) {
            count7++;
        } else if (stConvertArr[i] == 8) {
            count8++;
        } else if (stConvertArr[i] == 9) {
            count9++;
        }
    }
    
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", count1, count2, count3, count4, count5, count6, count7, count8, count9);
    
    return 0;
}
