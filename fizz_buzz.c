#include<stdio.h>
 int main(){
    int num ;
    printf("Enter the no :");
    scanf("%d",&num);
    if(num%3==0 && num%5==0){
        printf("fizz buzz");
    }else if(num%3==0 ){
          printf("fizz");
    }else{
         printf(" buzz");
    }
 }