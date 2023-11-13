#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    char aStr[4], bStr[4];
    
    sprintf(aStr, "%d", a);
    sprintf(bStr, "%d", b);
    
    char tempA = aStr[0];
    aStr[0] = aStr[2];
    aStr[2] = tempA;
    
    char tempB = bStr[0];
    bStr[0] = bStr[2];
    bStr[2] = tempB;
    
    if (strcmp(aStr, bStr) > 0) printf("%s", aStr);
    else printf("%s", bStr);
    
//    int aLen = 0, bLen = 0;
//    aLen = strlen(aStr);
//    bLen = strlen(bStr);
//    
//    int i, j, k, m;
//    for (i = aLen - 1, k = 0; i >= 0; i--, k++)
//        reStrA[k] = aStr[i];
//    reStrA[i] = '\0';
//    
//    printf("%s\n", reStrA);
//    
//    for (j = bLen - 1, m = 0; j >= 0; j--, m++)
//        reStrB[m] = bStr[j];
//    reStrB[j] = '\0';
//    
//    printf("%s\n", reStrB);
//     
//    if (reStrA > reStrB) printf("%s", reStrA);
//    else printf("%s", reStrB);
    
    return 0;
}