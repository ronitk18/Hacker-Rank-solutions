#include <stdio.h>

int main() {

  int age, inc, risk;
  scanf("%d",&age);
  scanf("%d",&inc);
  scanf("%d",&risk);
  if (age<30){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");} else if (age>=30 && age <=50 && inc>75000 && risk==3 ){
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
     }else if(age>50 && risk==3 && inc>75000) {
       printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
  }    else if( age>=30 && age <=50 && inc<=75000 && risk==2){
       ("Medium Risk Portfolio: Balanced risk for moderate returns.");
     } else if ( age>=30 && age<=50 && inc>75000 && (risk==2 || risk==1)){
         printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
     }else if (age>50 && !(inc>75000 && risk==3)){
     printf("Low Risk Portfolio: Suitable for conservative investments.");
   } else if( inc<=30000 && (risk==1 || risk==2)){
      printf("Low Risk Portfolio: Suitable for conservative investments.");
   }

    
   
  return 0;
}
