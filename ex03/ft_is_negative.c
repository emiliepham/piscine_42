#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	char sign;
	if (n<=0)
	{
	 sign = 'N';
	}
	else
	{
	 sign = 'P';
	}
	ft_putchar(sign);
}
