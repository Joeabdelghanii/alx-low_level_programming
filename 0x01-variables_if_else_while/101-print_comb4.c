#include <stdio.h>


/**
* main - prints if number is +
*
* Return: Always (Success)
*/

int main(void)
{
int n, m, l;
for (n = 48; n < 58; n++)
{
for (m = 49; m <= 58; m++)
{
for (l = 50; l < 58; l++)
{
if (l > m && m > n)
{
putchar(l);
putchar(n);
putchar(m);
if (n != 55 || m != 56)
{
puchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
