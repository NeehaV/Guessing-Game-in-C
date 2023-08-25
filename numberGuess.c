#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
    const int MIN = 1;
    const int MAX = 10;
    int number;
    int answer;
    int guesses = 1;
    char play;

    printf("\n\n\n\t\t\tWelcome to\n");
    printf("\t\t***Number Guessing Name***\n");

    do
    {
        srand(time(0));
        answer = (rand() % MAX) + MIN;

        printf("\nGuess a number between 0 to 10: ");
        scanf("%d", &number);

        while (answer != number)
        {
            printf("\n\t*****Wrong Answer*****");
            if (answer > number)
            {
                printf("\n\tGuessed number is lower");
            }
            else
            {
                printf("\n\tGuessed number is higher");
            }

            printf("\n\nGuess Again : ");
            scanf("%d", &number);
            guesses++;
        }

        printf("\n\t *****YOU HAVE WON*****");
        printf("\n\tCongratulations!");
        printf("\nAnswer is : %d", answer);
        printf("\nNumber of guesses: %d", guesses);

        fflush(stdin);
        printf("\nDo you want to play again (Y/N) :");
        scanf("%c", &play);
        play = toupper(play);
    } while (play != 'N');

    printf("\n\tThank you for playing. See Ya!\n\n");

    return 0;
}