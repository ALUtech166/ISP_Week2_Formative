// C program to count upper & lower case of a given string 

#include <stdio.h>
#include <string.h>


// here sub-function of uppercase, lowercase and special char

int UpperCase(char string[]) {
    
    int i = 0;
    int upper = 0;

    for ( i = 0; string[i] != '\0'; i++)
    {
        /* code */
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            /* code */
            upper++;
        }
        
    }
    return upper;
    
}


int LowerCase(char string[]) {
    
    int i = 0;
    int lower = 0;

    for ( i = 0; string[i] != '\0'; i++)
    {
        /* code */
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            /* code */
            lower++;
        }
        
    }
    return lower;
    
}

// this is the sub-function for the specail char counting

int SpecialChar( char string[]) {
   
    int i = 0;
    int special_Char = 0;

    // looping 

    for (i = 0; i < strlen(string); i++)
    {
       special_Char++;
        
    }
    int UpCount = UpperCase(string);
    int LowCount = LowerCase(string);

    int n = special_Char - (UpCount + LowCount);

    return n;
    
    
}

// main function

int main() {
    
    char c[100] = "The BIG Bos is nameD Serge2%$@";
    
    // the Printing
    printf("The numner of UpperCase: %d \n", UpperCase(c));
    printf("The numner of LowerCase: %d \n", LowerCase(c));
    printf("The numner of Special Character: %d \n", SpecialChar(c));

    return 0;

} 