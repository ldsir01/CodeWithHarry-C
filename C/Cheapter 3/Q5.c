#include <stdio.h>

int main()
{
    char c;
    printf("Enter Charactor : ");
    scanf("%c",&c);

    if(c>=97 && c<=122){printf("Lowercase ! ");}
    else {printf("Not Lowercase");}
}