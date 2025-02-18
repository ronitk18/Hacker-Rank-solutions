#include <stdio.h>

int main() {
    int path, final;
    scanf("%d",&path);
    scanf("%d",&final);
    if (path>=1 && path<=3){
          if (path==1){
        printf("Player chooses the Left path.\n");
              int action;
              scanf("%d",&action);
              if(action==1 || action==2){
                  if(action==1){
                      printf("Poor choice, Game Over!\n");
                  }else if(action==2){
                       printf("Player found a bridge.\n");  
                        int search;
                        scanf("%d",&search);
                      if(search==1 || search==2){
                          if(search==1){
                              printf("Player crosses the bridge safely\n");
                          }else if( search==2){
                              printf("Poor luck, Game Over!\n");

                          }
                      }
                  }
              }
    }else if(path==2){
              int puzzle;
              scanf("%d", &puzzle);
              if (puzzle==582){
                  printf("Player solved the puzzle.\n");
              }else {
                  printf("Foolish player, Game Over!\n");
              }
    }else if(path==3){
              int puz ;
              scanf("%d", &puz);
              if (puz==30){
                  printf("Player solved the puzzle.\n");
              }else{
                  printf("Foolish player, Game Over!\n");
              }
          }
      else  if
           (final>=1 && final<=3){
             if(final==1 ){
                  printf("All that glitters is not gold, Game Over!\n");
             }else if(final==2){
                  printf("All your efforts were for nothing, Game Over!\n");
             }else if(final==3){
                  printf("Congratulations!! You won the treasure.\n");
             }
          }
}
     return 0;
}