#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		putchar('\n');
		alpha++;
	}
	return (0);
}
