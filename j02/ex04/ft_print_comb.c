#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char centaines, dizaines, unites;
	centaines = '0';
	dizaines = centaines+1;
	unites = dizaines+1;
	while(centaines <= '7')
	{
	 while(dizaines <= '8')
	 {
	  while(unites <= '9')
	  {
	   ft_putchar(centaines);
	   ft_putchar(dizaines);
	   ft_putchar(unites);
	   ft_putchar(',');
	   unites++;
	  }
	 dizaines++;
	 unites = dizaines+1;
	 }
	centaines++;
	dizaines = centaines+1;
	unites = dizaines+1;
	}
}
