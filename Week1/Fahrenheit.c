/*
Converts Fahrenheit to celsius 
Ivo tanganelli 
june, 11, 2025
*/

#include <stdio.h> //preprocess to input output

int main(void) //void here means no argument, argument list is empty
{
    int fahrenheit, celsius;

    printf("Please enter fahrenheit as an integer:");
    scanf("%d", &fahrenheit); // the & symbol means that im allocating the variable to fahrenheit location, if i only call the variable, im looking for its value, with & im looking for its address
    celsius =(fahrenheit -32)/1.8; //note conversion
    printf("\n %d fahrenheit is %d celsius.\n",fahrenheit, celsius);
    return 0;
}
