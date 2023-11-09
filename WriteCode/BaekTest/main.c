#include <stdio.h>

int main() {
    int strToIntArr[26];
    char str[100];
    scanf("%s", str);
    
    int i;
    for (i = 0; i < 26; i++) 
        strToIntArr[i] = -1;
    
    int j, k = 0;
//    for (k = 0; k <= str[k]; k++) {
//        j = str[k] - 'a';
//        if (strToIntArr[j] == -1) strToIntArr[j] = k;
//    }

    while (str[k]) {
        j = str[k] - 'a';
        if (strToIntArr[j] == -1) strToIntArr[j] = k;
        k++;
    }
    
    int i2;
    for (i2 = 0; i2 < 26; ++i2)
        printf("%d ", strToIntArr[i2]);

    return 0;
}