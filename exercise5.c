/*Exercise 5  guess a random number of C program.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// count = i
int main()
{
    int Secret_No = 0, i = 0, Guess_num;
    int stime;
    long ltime;

    //Here is the C code
    /*ltime = time(NULL);
    stime = (unsigned) ltime/2; 
    */
    srand(time(NULL));

    //generate random number
    Secret_No = rand() % 50;
    //While  loop
    while (1)
    {
        //This integer i is increasing the Counter
        i += 1;

        //User Guess Input
        printf("\n Guess a number between 0 and 50: ");
        scanf("%d", &Guess_num);

        //if condition is checking either the secret number is lower or greater than the User Input

        if (Secret_No == Guess_num)
        {
            printf("Congratulations, you have made  guesses.");
            break;
        }
        else
        {
            // code
            if (Secret_No > Guess_num)
            {
                printf("Secret number is greater than Guess number, try again!!!");
            }
            else
            {
                /* code */
                printf("Secret number is Lower than Guess number, try again!!!");
            }

            // attempting code for counting
            if (i == 10)
            {
                printf("\n\n You have attempted  Maximum limit of atttempt!!!\n");
                break;
            }
        }
    }

    return 0;
    
}
