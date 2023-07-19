#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *
 * main - entry point
 *
 * return always 0 (success)
 *
 * description: are n positive or negative
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%i is positive", n);
	}
	else if (n == 0)
	printf("%d is zero", n);
	}
	else if (n < 0)
	printf("%d is negative", n);
	return (0);
}