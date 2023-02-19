
/******************************************************************************
WAP To input mask of 5 subject and find out your position
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d,e,student_percent,marks_sum;
    printf("Enter marks of 5 subjects respectively.");
    scanf("%d %d %d %d %d ", &a,&b,&c,&d,&e);
    marks_sum= a+b+c+d+e;
    student_percent= (marks_sum/5);
    if(student_percent>=80){
        printf("You have first division.");
    }else if(student_percent>=70){
        printf("You have second division");
    }else if(student_percent>=60){
        printf("You have third division");
    }else{
        printf("Please try your hard since you failed the exam");
    }
    

    return 0;
}
