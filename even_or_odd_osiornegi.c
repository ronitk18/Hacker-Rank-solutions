#include <stdio.h>
int main()
{
    int num;
    printf("Enter the no. :");
    scanf("%d", &num);
    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("%d  Is a positve even number", num);
        }
        else
        {
            printf("%d  Is a positve odd number", num);
        }
    }
    else if (num < 0)
    {
        printf("%d  Is a positve odd number", num);
    }
    else if (num == 0)
    {
        printf("Zero");
    }
}