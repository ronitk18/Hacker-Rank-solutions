#include <stdio.h>

int main()
{

    unsigned int a, b, c;
    scanf("%u", &a);
    scanf("%u", &b);
    scanf("%du", &c);
    if (c <= a + b || b <= a + c || a <= b + c)
    {
        if (a == b && b == c && c == a)
        {
            printf("Length:  %d, %d, %d\n", a, b, c);
            printf("Type: Equilateral ");
            printf("All sides are of the same length.");
        }
        else if (a == b && c != a)
        {
            printf("Length:  %d, %d, %d\n", a, b, c);
            printf("Type: Isosceles\n");
            printf("Two sides are of the same length.\n");
        }
        else
        {
            printf("Length:  %d, %d, %d\n", a, b, c);
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.\n");
        }
    }
    else
    {

        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }
    return 0;
}
