/*If the length of the sides of a triangle are denoted by a, b and c, then the area of triangle is given by: */

#include <stdio.h>
#include <math.h>

void area(float a, float b, float c);
int main()
{
    float a, b, c;

    printf("Enter Side of a: ");
    scanf("%f", &a);

    printf("Enter Side of b: ");
    scanf("%f", &b);

    printf("Enter Side of c: ");
    scanf("%f", &c);

    area(a, b, c);
}
void area(float a, float b, float c)
{
    float S, AREA, A;

    S = (a + b + c) / 2;
    AREA = sqrt(S * (S - a) * (S - b) * (S - c));

    printf("Area of Triangle is: %f", AREA);
}

/*#include <stdio.h>
#include <math.h>

void area(float a, float b, float c)
{
    float S, AREA, A;

    S = (a + b + c) / 3;
    AREA = sqrt(S * (S - a) * (S - b) * (S - c));

    printf("Area of Triangle is: %f", AREA);
}
int main()
{
    float a, b, c;

    printf("Enter Side of a: ");
    scanf("%f", &a);

    printf("Enter Side of b: ");
    scanf("%f", &b);

    printf("Enter Side of c: ");
    scanf("%f", &c);

    area(a, b, c);
}
*/
