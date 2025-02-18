#include <stdio.h>
int main(){

    int choice;
    printf("Choose the following options:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);

    int num1, num2;
    int result;
    printf("Enter the firstnumber:");
    scanf("%d", &num1);
    printf("Enter num2");
    scanf("%d", &num2);

    int flag = 1;
    if (choice == 1)
    {
        result = num1 + num2;
    }
    else if (choice == 2)
    {

        result = num1 - num2;
    }
    else if (choice == 3)
    {
        result = num1 * num2;
    }
    else if (choice == 4)
        if (num2!= 0){
            result = num1 / num2;
        }
            
        else
        {
            printf("Error: Division by zero is not allowed.\n");
            flag = 0;
        }
    
    else
    {
        printf("Invalid choice. Please try again.");
        flag = 0;
    }
    if (flag == 1)
    {
        printf("Result: %d", result);
    }
}




    
