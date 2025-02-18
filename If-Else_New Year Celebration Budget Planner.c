#include <stdio.h>

int main() {
    
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;


    scanf("%d", &budget);
    scanf("%d", &numGuests);
    scanf("%d", &foodCostPerGuest);
    scanf("%d", &decorationCost);
    scanf("%d", &musicCost);
    scanf("%d", &extraExpenses);

    
    int totalFoodCost = numGuests * foodCostPerGuest;

    
    int totalExpenses = totalFoodCost + decorationCost + musicCost + extraExpenses;

    if (totalExpenses <= budget && numGuests > 5 && numGuests <= 50) {
  
        if ((decorationCost < 0.3 * budget) || (totalFoodCost < 0.5 * budget)) {
        
            if (numGuests > 25 && musicCost <= 0) {
                printf("Celebration Denied\n");
            } else {
                printf("Celebration Approved\n");
            }
        } else {
            printf("Celebration Denied\n");
        }
    } else {
        printf("Celebration Denied\n");
    }

    return 0;
}