#include <stdio.h>

// int are_of_rectangle(int a, int b)
// {
//     return a * b;
// }

int main()
{
   int P,C,M;
   printf("Enter marks in P,C,M : ");
   scanf("%d %d %d ",&P,&C,&M);

   if(((P+C+M) >= 120) && (P>=40) && (C>=40) && (M>=40) )
        {printf("Congratulations ! You are pass !!");}
    else {printf("You are not pass !");}


}