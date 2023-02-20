/******************************************************************************
WAP To input mask of 5 subject and find out the grade.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d,e,student_percent,marks_sum;
    printf("Enter marks of 5 subjects respectively.");
    scanf("%d %d %d %d %d ", &a,&b,&c,&d,&e);
    marks_sum= a+b+c+d+e;
    student_percent= (marks_sum/5);
    if(student_percent>=90){
        printf("You have A+");
    }else if(student_percent>=80){
        printf("You have A");
    }else if(student_percent>=70){
        printf("You have B+");
    }else if(student_percent>=60){
        printf("You have B");
    }else if(student_percent>=50){
        printf("You have C+");
    } else if(student_percent>=40){
        printf("You have C");
    }else if(student_percent>=30){
        printf("You have D+");
    }else{
        printf("You have NG");
    }
    return 0;
}
