#include <stdio.h>
#include <string.h>

int main() {
    int n_arr[5];
    
    int i, power = 1, j = 0, sum = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &n_arr[i]);
        
        for (j = 0; j < 2; j++)
            power = power * n_arr[i];

        sum += power;
        power = 1;
    }
    
    printf("%d", sum % 10);
    return 0;
}

//#include <stdio.h>
//int main(){
//    int a, b, i, inv=1; 
//    //inv는 곱셈에 사용하므로 '1'로 초기화 
//    printf("==거듭제곱 출력 프로그램==\n\n"); 
//    printf("밑수를 입력하세요."), scanf("%d", &a);
//    printf("지수를 입력하세요."), scanf("%d", &b);
//    
//    for(i=0;i<b;i++) {
//        //입력받은 지수만큼 반복
//        inv=inv*a;      //a의 거듭제곱
//    }
//    printf("\n%d의 %d제곱은 %d입니다.", a, b, inv);
//return 0;}
//
