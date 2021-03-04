#include <stdio.h>

void greatest_of_four(int a,int b,int c, int d)
{
    if(a>b && a>c && a>d){printf("%d is biggest of four",a);}
    else if(b>a && b>c && b>d){printf("%d is biggest of four",b);}
    else if(c>a && c>b && c>d){printf("%d is biggest of four",c);}
    else {printf("%d is biggest of four",d);}
}

int main()
{
    int a,b,c,d;
    printf("Enter four numbers : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    greatest_of_four(a,b,c,d);
}