#include <stdio.h>

int main() {

  int u;
  scanf("%d",&u);
  float b;
  if(u<0){
    printf("Invalid Input!");
  }
  else if(u<=100){
    b=u*5; 
    if(b<=1200){
      b=b-(b*0.1);
      printf("The electricity bill is: %.2f.",b);  
    }
    else{
      printf("The electricity bill is: %.2f.",b);  
    }
          
  }
  else if(u>100 && u<=300){
    b=(u-100)*7+ 500;
    
    if(b<=1200){
      b=b-(b*0.1);
      printf("The electricity bill is: %.2f.",b);  
    }
    else{
      printf("The electricity bill is: %.2f.",b);  
    }
              
  }
  else if(u>300){
    b=(u-300)*10+1900;
    if(b<=1200){
      b=b-(b*0.1);
      printf("The electricity bill is: %.2f.",b);  
    }
    else{
      printf("The electricity bill is: %.2f.",b);  
    }  
}
    return 0;
}