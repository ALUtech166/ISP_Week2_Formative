#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// x = square number 
// n = number

// C code for giving a nearest a whole number of square root
int checkingNum(int n) {
    // here is the logic 
    double x = sqrt(n);
    if (ceil(x) == floor(x)) {
        return n;
    }
    else
    {
        /* code */
        return 0;
    }
    
}
// a Fuction for finding a nearest square 
void NearestSquare(int n) {
    if (checkingNum(n) != 0) {
        printf("%d this is perfect square \n", n);
    }
    else {
        bool z = true;
        int tempo = n;
        int i = 1;
        while(z) {
            // code here
            if (i == n) {
                break;
            }
            // k = square root Up
            // d = square root down
            double k = sqrt(tempo + i);
            if (ceil(k) == floor(k)) {
                printf("%d This is the closest  whole number square root is: \n", tempo + i);
                break;
            }

            double d = sqrt(tempo - i);
            if (ceil(d) == floor(d)) {
                printf("%d This is the closest  whole number square root is: \n", tempo - i);
                break;
            }
            i++;

    
        }
    }
}



// main unction for user to enter an postive number
void main()
{
    bool z = true;
    while(z) {
        int n = 0;
        int j = 0;
        // input
        printf("Enter the positive number: \n");
        scanf("%d", &n);
        long temp = n;

        do {

            // code 

            temp /= 10;
            j++;
        } while ( temp != 0); // looping

        if (j <= 0 || j >= 8) {
            printf("Enter a postive integer from  to 7 \n");
        }
        else {
            n = abs(n);
            NearestSquare(n);
            break;
        }
    }
  

   
}