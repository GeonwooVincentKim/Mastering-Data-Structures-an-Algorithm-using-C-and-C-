#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    int i, j, count = 0, sum = 0;
    char str[80];
    
    for (i = 0; i < t; i++){
        scanf("%s", str);
        
        j = 0;
        count = 1;
        sum = 0;
        
        for (j = 0; str[j] != '\0'; j++) {
            if (str[j] == 'O') {
                sum += count;
                count += 1;
            }
            
            if (str[j] == 'X') count = 1;
        }
        printf("%d\n", sum);
    }
    
    return 0;
}
