/*
The distance of a marathon in kilometers 
Ivo tanganelli 
june, 11, 2025
*/

#include <stdio.h> //preprocess to input output

int main(void) //void here means no argument, argument list is empty
{
    int miles = 26, yards = 385;
    double kilometers; //define kilometers as double precision

    kilometers = 1.609 *( miles + yards / 1760.0);
    printf("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;  //this indicates to the code that it ended correctly  
}
