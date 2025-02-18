#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("1");
        return 0;
    }
    if(n<=0)
    {
        printf("%d -> 1", n);
        return 0;
        
    }
    printf("%d -> ",n);
    int max=n;
    for( int i=n; ; )
    {
       if( i%3==0){
            i=i/3;
            printf("%d -> ",i);
            if(max<i)
                max=i;
            
        }
       else if( i%5==0 ){
            i=i-5;
                    printf("%d -> ",i);
            if(max<i)
                max=i;
        }
        else{
        i=i*5;
        printf("%d -> ",i);
             if(max<i)
                max=i;
    }
        if( i<1){
        printf("1");
        break;
}
}
    
    printf("\nMax Number: %d",max);
    return 0;
}