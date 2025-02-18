#include<stdio.h>
int main(){
    int N ;
    scanf("%d",&N);
    if(N>99 && N<1000){
        printf("%d is a three digit number", N);
    }else{
         printf("%d is a not three digit number",N);
    }
    return 0;
}