#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c;
    
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        int sqA = (a * a), sqB = (b * b), sqC = (c * c);
        
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        
        if (sqA + sqB == sqC || sqB + sqC == sqA || sqA + sqC == sqB)
            printf("right\n");
        else printf("wrong\n");
        
        sqA = 0, sqB = 0, sqC = 0;
    }
    
	return 0;
}
