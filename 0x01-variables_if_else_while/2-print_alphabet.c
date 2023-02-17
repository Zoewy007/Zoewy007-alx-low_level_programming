#include <stdio.h>

int main(void)
{
	int alpha_low;
	int alpha_high;
	
	alpha_low = 'a';
	while (alpha_low <= 'z')
	{
		putchar(alpha_low);
		alpha_low++;
	}
	alpha_high = 'A';

	while (alpha_high <= 'Z')
	{
		putchar(alpha_high);
		alpha_high++;
	}
	return (0);
}
