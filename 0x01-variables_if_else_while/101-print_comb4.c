#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int x;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (x = 1; x < 10; x++)
		{
			for (k = 2; k < 10; k++)
			{
				if (i < x && x < k)
				{
					putchar(i + '0');
					putchar(x + '0');
					putchar(k + '0');
					if (i + x + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
