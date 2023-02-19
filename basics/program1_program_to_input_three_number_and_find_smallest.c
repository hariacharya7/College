#include<stdio.h>
#include<conio.h>

int main(){
  printf("enter 3 numbers");
  scanf("%d %d %d", &a,&b,&c); 
  if(a<b && a<c){
    print("%d is smallest number", a);
  }else if(b<c){
    print("%d is smallest number",b);
  }else{
    print("%d is smallest number",c);
  }
}
