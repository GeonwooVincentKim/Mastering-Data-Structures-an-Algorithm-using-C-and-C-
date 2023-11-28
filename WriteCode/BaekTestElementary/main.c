#include <stdio.h>

int main() {
    char subjectName[51];
    char score[3];
    double credit;
    
    int i;
    int creditSum = 0;
    double gradeNum = 0, sum = 0;
    
    for (i < 0; i < 20; i++) {
        scanf("%s %lf %s", subjectName, &credit, score);
        
        if (score[0] == 'P') continue;
        creditSum += credit;
        
        if (score[0] == 'F') continue;
        
        if (score[0] == 'A') gradeNum = 4;
        else if (score[0] == 'B') gradeNum = 3;
        else if (score[0] == 'C') gradeNum = 2;
        else gradeNum = 1;
        
        if (score[1] == '+') gradeNum += 0.5;
        sum += credit * gradeNum;
    }
    
    printf("%lf\n", sum / creditSum);
    
    return 0;
}