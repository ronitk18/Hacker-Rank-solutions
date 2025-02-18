#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("The no is divisible by 5 or 3 ");
    }else{
        printf("the no is not");
    }
}