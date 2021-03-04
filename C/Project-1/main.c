#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int number = rand() % 100 + 1;

    int Guess, nguess = 0;
    // scanf("%d", &Guess);

    // printf("Your No. is %d\n", Guess);

    do
    {
        // int Guess;
        printf("Guess number  : ");
        scanf("%d", &Guess);

        if (Guess < number)
        {
            printf("Lower :\n ");
        }
        else if (Guess > number)
        {
            printf("Upper :\n ");
        }

        else
        {
            printf("%d attenpts", nguess);
        }
        nguess++;
    }

    while (number != Guess);
}