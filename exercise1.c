#include <stdio.h>

// C program that sums up the odd and even numbers taken as user input
// Sum of odd = j
// sum of even = k

void main()
{
    int i, num, j = 0, k = 0;
    printf("\n Hello User! Welcome to this C program that sums up the odd and even number \n");
    printf("Enter the number: \n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            k = k + i;
        }
        else
        {
            j = j + i;
        }
    }
    // Printing OUt the Results
    printf(" The Sum of add numbers = %d\n", j);
    printf("The sum of even numbers = %d\n", k);

    /*
-the absolute difference between the sums
-a third of the sum of the even numbers
-5th of the sum of the odd numbers.
    */
}