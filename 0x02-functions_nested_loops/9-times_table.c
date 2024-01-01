#include "main.h"
#include <stdio.h>
/**
 * times_table - Print the 9 times table,
 * starting with 0.
 */

void times_table(void)
{
	int row, col, result;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			result = row * col;

			if (col == 0)
			{
				printf("%d, ", result);
			}

			else if (col != 9)
			{
				printf("%2d, ", result);
			}
			else
			{
				printf("%2d", result);
			}
		}
		printf("\n");
	}
}

