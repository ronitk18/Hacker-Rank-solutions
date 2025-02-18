#include<stdio.h>
int main(){
    int a , b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if( a>b && c>a){
       printf(" a is the greatest");
         }else if(b>c && b>a){
             printf("b is the greatest");
         }else if(c>b && c>a){
            printf("c is the greatest");
         }
}