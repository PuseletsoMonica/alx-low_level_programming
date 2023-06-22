#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");  \*there is no opening bracket  before the backslash. */

        i = 0; \* the declaration was supposed to come befoe the print function*/

        while (i < 10)  \* This comment is not clear for the execution of the code*/
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");  \* \\ the string has two backslashes instead of on therefore the rest of the code is ignored.*/

        return (0);
}
