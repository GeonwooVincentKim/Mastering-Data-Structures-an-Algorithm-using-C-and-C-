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
    
    return 0;
}