#include <stdio.h>

/* C program that priompts the user for a postive integer and then computes the sum
all digit of number
*/
void main() {
    // Here is the C code 
    int i, num, sum = 0;
    printf("\nHello User!");
    printf("\nEnter the Positive integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        /* code */
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("The result is = %d\n", sum); 
    /*
    - The program is working for any number having one to ten digits.
     A number such 12345678901, should not be allowed.
     This is beacause it has 11 digits
    */
           
}