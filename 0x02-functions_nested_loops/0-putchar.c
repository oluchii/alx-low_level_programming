#include "main.h"
/**
* main - Print "Holberton" followed by a new line.
* Description: You are not allowed to include standard libraries.
* Return: 0
*/
int main(void)
{
char [] = "_putchar";
int i = 0;

while (_putchar[i] != '\0')
{
putchar(_putchar[i]);
i++;
}
putchar('\n');

return (0);
}
