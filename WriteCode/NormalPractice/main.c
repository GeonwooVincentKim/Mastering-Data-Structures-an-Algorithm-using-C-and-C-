#include <stdio.h>

int main(int argc, char **argv)
{
    int h, m, c;
    scanf("%d %d", &h, &m);
    scanf("%d", &c);

    if (m + c < 60) {
        printf("%d %d", h, m + c);
    } else {
        int hour = (m + c) / 60;
        int min = (m + c) % 60;
        
        if (h + hour < 24) printf("%d %d", h + hour, min);
        else printf("%d %d", h + hour - 24, min);
    }
    
    return 0;
}
