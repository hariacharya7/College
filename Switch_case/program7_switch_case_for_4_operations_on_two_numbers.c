/*
WAP to find the product, sum, division and subtraction using the switch case.
*/
#include<stdio.h> // including header files.


void main(){
    int a,b,c;
    printf("Enter two numbers.");
    scanf("%d %d", &a, &b);
    printf("Enter your choice. \n 1. Addition \n 2. Subtraction \n 3. Division \n 4. Product");
    scanf("%d", &c);
    switch (c)
    {
    case 1: // SUM case
    int sum;
    sum=a+b;
    printf("The sum of numbers is: %d", sum);
        break;
    case 2: // SUB case
    int sub;
    sub= a-b;
    printf("Subtraction of Numbers is: %d", sub);
    break;
    
    case 3: // Div Case
    int div;
    div = a/b;
    printf("Division result is: %d", div);
    break;

    case 4: // Product case
    int pro;
    pro= a*b;
    printf("The product is: %d", pro);
    break;
    
    default: // if input is wrong.
    printf("The input is wrong try again.");
    break;
    }
}
