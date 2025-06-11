/*
Circle area 
Ivo tanganelli 
june, 11, 2025
*/

#include <stdio.h> //preprocess to input output

#define PI 3.14159 //preprocess token PI stored as PI

int main()
{
    double area = 0.0, radius = 0.0; // initialize variables to 0 
    printf("Enter radius: "); 
    scanf("%lf", &radius); 
    area = PI * radius * radius;
    printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
    return 0;    
}
