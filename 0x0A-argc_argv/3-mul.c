#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;
	if (argc > 1)

	{	
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
			printf("%d\n", mul);
		}
	}
	return (0);
}

