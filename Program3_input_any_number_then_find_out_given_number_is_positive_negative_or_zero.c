/*
WAP to input any number and find if it is positive, negative or zero
*/

#include<stdio.h>

void main(){
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if(a>0){
        printf("Number is positive");
    }else if(a==0){
        printf("Number is zero.");
    }else{
        printf("Number is negative.");
    }
}
