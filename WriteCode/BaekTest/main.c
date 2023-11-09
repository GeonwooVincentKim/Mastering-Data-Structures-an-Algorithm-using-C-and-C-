#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    
    if (m < 45 && m >= 0) {
        m += 60;
        m -= 45;
        
        if (h == 0) {
            h = 23;
        } else if (h >= 1 && h < 24){
            h -= 1;
        }
    } else if (m >= 45 && m < 60) {
        m -= 45;
    }
    
    printf("%d %d", h, m);
    return 0;
}