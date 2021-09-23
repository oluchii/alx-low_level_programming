#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *sout;
unsigned int a1, a2, aout, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (a1 = 0; s1[a1] != '\0'; a1++)
;

for (a2 = 0; s2[a2] != '\0'; a2++)
;

if (n >= a2)
n = a2;

aout = a1 + n;

sout = malloc(aout + 1);

if (sout == NULL)
return (NULL);

for (i = 0; i < aout; i++)
if (i < a1)
sout[i] = s1[i];
else
sout[i] = s2[i - a1];

sout[i] = '\0';

return (sout);
}
