#include <stdio.h>

int main() {
float a;
  scanf("%f",& a);
  if(a<0){
    printf("INVALID");
  }
  else if(a<=250000){
    printf("0.00");
  }
  else if(250000<a && a<=500000){
    a= (a-250000)*0.05;
    printf("%.2f",a);      
  }
  else if(500000<a && a<=1000000){
    a= (a-500000)*0.2+12500;
    printf("%.2f",a);
  }
  else if(a>1000000){
    a= (a-1000000)*0.3+112500;
    printf("%.2f",a);
  } 
    return 0;
}