#include <stdio.h>
#include <stdlib.h>

//int strToIntConvertArr[100];
int arrStrToInt[100];

int main() {
    char str[100];
    scanf("%s", str);
    
    int i;
    for (i = 0; i <= sizeof(str); i++) {
        arrStrToInt[i] = (int)str[i];
        printf("%d\n", arrStrToInt[i]);
    }
    
    printf("\n");
    
    int j, k;
    for (j = 97; j < 123; j++) {
//        arrStrToInt[j] - 'a';
        for (k = 0; k < sizeof(arrStrToInt); k++) {
            if (arrStrToInt[k] == j) {
                printf("%d %d\n", arrStrToInt[j] - 'a', j);
//                arrStrToInt[j] - 'a' = j;
                break;
            }
        }
        
//        printf("\n");
//        printf("%d ", arrStrToInt[j] - 'a');
//        arrStrToInt[j % 97]++;
    }
    
    for (i = 0; i < 26; i++) {
        printf("%d", arrStrToInt[i]);
    }
    
    
    
//    int i;
//    for (i = 97; i < 123; i++) {
//        
//    }
    
    return 0;
}