#include <unistd.h>

void	ft_putchar(char c);
void	verific(char a, char b, char c);
void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb ();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	verific(char a, char b, char c)
{
	if (!(a == '7' && b == '8' && c == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	number_1;
	char	number_2;
	char	number_3;

	number_1 = '0';
	while (number_1 <= '7' )
	{
		number_2 = number_1 + 1;
		while (number_2 <= '8')
		{
			number_3 = number_2 + 1;
			while (number_3 <= '9')
			{
				ft_putchar (number_1);
				ft_putchar (number_2);
				ft_putchar (number_3);
				verific(number_1, number_2, number_3);
				number_3++;
			}
			number_2++;
		}
		number_1++;
	}
}
