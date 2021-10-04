// C program for pyramide Pattern
#include <stdio.h>

//
#define MAX 5
// x = space


int main()
{
    // Here we go 
    int i;
    int j;

    int x = 4;
    // Parent loop for the number of rows
    for (i = 0; i < MAX; i++)
    {
        // it's initializing the space x
        for (j = 0; j < x; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
        x--;
    }
    x = 0;
    for (i = MAX; i > 0; i--)
    {
        for (j = 0; j < x; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
        x++;
    }

    return 0;
}
