#include<stdio.h>
#define PI 3.14

float are_of_circle(int a)
{
    return a*PI*PI;
}


int main()
{
    float radius,area;
    printf("Enter radius  of circle : ");
    scanf("%f",&radius);
    area = are_of_circle(radius);
    printf("Area is %f",area);
}