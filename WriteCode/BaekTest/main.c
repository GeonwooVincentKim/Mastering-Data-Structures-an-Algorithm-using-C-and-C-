#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    char ch;
    char pch=' ';
    while(1)  {
        ch=getchar();
        
        if(ch== '\n' || ch==EOF)
        {   
            break;
        }
        else if(pch==' ' && ch!=' ')
             count++;
             
        pch=ch;
    }
    printf("%d\n", count);
    
    return 0;
}