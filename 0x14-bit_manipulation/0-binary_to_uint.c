#include "main.h"

unsigned int binary_to_uint(const char *b)
{
/* Check if the input is NULL. */
	if (b == NULL)
	{
		return (0);
	}
 /* Initialize the result. */
	unsigned int result = 0;

  /* Iterate over the input string, adding each digit to the result. */
	for (int i = 0; b[i] != '\0'; i++)
	{
    /* Check if the digit is valid. */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

    /* Add the digit to the result. */
		result += (unsigned int)(b[i] - '0') << (i);
	}
  /* Return the result. */
	return (result);
}

