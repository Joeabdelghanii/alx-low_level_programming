#include <stdio.h>


/**
* main - prints if number is +
*
* Return: Always (Success)
*/

int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

