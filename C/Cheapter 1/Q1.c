#include<stdio.h>

int are_of_rectangle(int a,int b)
{
    return a*b;
}


int main()
{
    int length,width,area;
    printf("Enter length and width of rectangle : ");
    scanf("%d",&length);
    scanf("%d",&width);

    area = are_of_rectangle(length,width);
    printf("Area is %d",area);

}