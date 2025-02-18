#include <stdio.h>
int main()
{
    float deg;                                 //---   Variable assigned to store the value entered by the user 
    printf("Enter the temperature in degree celcius : %c",248);
    scanf("%f", &deg);                         //---   Taking input from the user in degree celcius
    float fer = (deg * 9 / 5) + 32;            //---   Storing the values inside a variable
    float kel = deg + 273.15;
    char str[10];                              //---   Variable assigned to store string type data
    printf("Choose whether you want to convert it into kelvin on fahrenheit :");
    scanf("%s", str);
    //---  Using if- else- if  conditional stattements to ask teh user in which unit they want their answer
    if (strcmp(str, "kelvin") == 0)      //---   It is a statement to convert the degree value into kelvin      
    {
        printf(" The temperature in kelvin is : %f K", kel);   
    }
     else if (strcmp(str, "fahrenheit") == 0) //---   It is a statement to convert the degree value into fahrenheit
    {
        printf(" The temperature in fahrenheit is : %f F",  fer ); 
    }
    else {
        printf("Invalid input please insert the valid input");    //--- If the user is mischevoius then it will be shown 89
    }
    return 0; // // CODE IS WORKING properly {Happy happy happy !!!} 
}