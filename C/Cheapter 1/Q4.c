#include<stdio.h>

float SimpleIntrest(int a,int b,int c)
{
    float I;
    I = (a*b*c);
    I = I/100;
    printf("%f",I);
    return 0;
}


int main()
{
    // char dt= '21 Dec 2020';
    // int a; b=a;
    // int v=3^3;
    float P,R,N,I;
    printf("Enter P,R,N : ");
    scanf("%f %f %f",&P,&R,&N);
    
    printf("%f %f %f ",P,R,N);
    SimpleIntrest(P,R,N);

}