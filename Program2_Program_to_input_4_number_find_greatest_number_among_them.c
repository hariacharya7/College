#include<stdio.h>
#include<conio.h>

int main(){
  int a,b,c,d;
    printf("Enter 4 numbers");
    scanf("%d %d %d %d", &a, &b, &c, &d);
  if(a>b && a>c && a>d){
    print("%d is the largest number", a);
    }else if(b>c && b>d){
    print("%d is the largest number", b);
  }else if(c<d){
    print("%d is the largest number", c);
  }else{
  print("%d is the largest number",d);
  }
}
