#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - Prints the last digit of a randomly generated number
 *   * and whether it is greater than 5, less than 6, or 0.
 *    *
 *     * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	 s = n % 10;
	 if (s > 5)
	 {
	 printf("Last digit of %d is %d and is greater than 5\n", n);
	 }
	 <<<<<<< HEAD
	 if (num == 0)		
=======	
	 else if (s == 0)
>>>>>>> c38d008b18676f16774155151031a0fcc1c46752
{											printf("Last digit of %d is %d and is 0\n", n, s);
} 
<<<<<<< HEAD
	if (num < 6)
=======
	else if (s < 6)
>>>>>>> c38d008b18676f16774155151031a0fcc1c46752
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	}
	return (0);
}

