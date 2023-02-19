#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("enter marks in five subjects respectively.");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum=a+b+c+d+e;
    average=sum/5;
    printf("%d",sum);
    printf("%d",average);
}
