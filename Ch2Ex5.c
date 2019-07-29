#include <stdio.h>

/* CODE THAT FOLLOWS A DOUBLE SLASH (//) IS THE ORIGINAL CODE WITH CORRECTIONS,
NEW CORRECTED CODE IS DIRECTLY BENEATH THE ORIGINAL */

// int main (Void) - there should not be a declared type in main
int main ()
//( - This should be an open brace, not a parenthetical
{
        // INT sum; - declarative statements occur in lowecase
        int sum;
        // /* COMPUTE RESULT - This should have a "*/" to end the comment line
        /* COMPUTE RESULT */
        // sum = 25 + 37 - 19 - statements must end with a semicolon, removed whitespace
        sum=25+37-19;
        // /* DISPLAY RESULTS // - The "//" here should be a */ to close comments
        /* DISPLAY RESULTS */
        // printf ("The answer is %i\n" sum); - %i often has hexidecimal errors, and must have a comma seperator
        printf("The answer is %d\n", sum);
        return 0;
}
