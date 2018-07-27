#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2 (void)
{
	char i, j, k, l;
	i = '0', j = '0', k = '0', l = '1';
	while(i <= '9')
	{
		while(j <= '8')
		{
			while(k <= '9')
			{
				while(l <= '9')
				{
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(' ');
					ft_putchar(k);
					ft_putchar(l);
					ft_putchar(',');
					l++;
				}
			k++;
			l = '0';
			}
		j++;
		k = i;
		l = j + 1;
		}
	i++;
	j = '0';
	k = i;
	l = j + 1;
	}
}
