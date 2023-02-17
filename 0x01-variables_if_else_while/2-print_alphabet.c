#include <stdio.h>
/**
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
		alpha++;
	}
	return (0);
}
