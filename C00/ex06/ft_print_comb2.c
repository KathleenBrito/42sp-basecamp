#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_cont(int a)
{
	char	left_n;
	char	right_n;

	left_n = (a / 10) + '0';
	right_n = (a % 10) + '0';
	ft_putchar(left_n);
	ft_putchar(right_n);
}

void	ft_print_comb2(void)
{
	int	number_1;
	int	number_2;

	number_1 = 0;
	while (number_1 <= 98 )
	{
		number_2 = number_1 + 1;
		while (number_2 <= 99)
		{
			ft_cont(number_1);
			ft_putchar(' ');
			ft_cont(number_2);
			if (!(number_1 == 98 && number_2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			number_2++;
		}
		number_1++;
	}
}
