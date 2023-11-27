#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    while (n > 0) {
        if (n % 5 == 0) {
            count++;
            n -= 5;
        } else {
            count++;
            n -= 3;
        }
    }
    
    if (n != 0 || count == 0) printf("-1");
    else printf("%d", count);
    
    return 0;
}


/*
 * 0 - 2^2, 1 - 3^2, 2 - 5^2, 3 - 7^2, 4 - 9^2, 5 - 11^2
 * 
 * 1 - 3^2 (+1), 2 - 5^2 (+2), 3 - 9^2 (+4), 4 - 17^2 (+8), 5 - 33^2 (+16)
 * deeperSum = 2;
 * 
 * sum += deeperSum
 * deeperSum *= 2
 * */
 
