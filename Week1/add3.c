/*Read in three floats and print sum
Ivo tanganelli
June, 02, 2025*/

#include <stdio.h>

int main(void)
{
    float a, b, c, sum;
    printf("Input three floats:");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %f, b =%f, c=%f\n", a, b, c );
    sum = a + b + c;
    printf("sum = %f\n\n", sum);
    return 0;
}

/*C as a language is small, with 29 keywords*/