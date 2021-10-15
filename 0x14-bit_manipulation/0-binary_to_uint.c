#include "main.h"

/**
* binary_to_uint - converts binary to unsigned int
* @b: input binary
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int;
	int len, bin;

	if (!b)
		return (0);

	u_int = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, bin = 1; len >= 0; len--, bin *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			u_int += bin;
		}
	}
	return (u_int);
}
