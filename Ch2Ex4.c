/*
Write a program that subtracts the value 15 from 87 and
displays the result, together with an appropriate message, at the terminal.
*/

#include <stdio.h>

int main()
{
int diff = 0;
diff = 15 - 87;
printf("If you subtract the value 15 from a larger number, say 87\n");
printf("you will get a negative value. In this case, the difference is %d\n", diff);

return 0;
}
