#include <unistd.h>

void ft_putnbr(int nb)
{
	int value;
	int positive;
	int div;
	int mod;
	int verific;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		write (1, "-", 1);
		positive = nb * -1;
		ft_putnbr (positive);
	}
	else if (nb > 9)
	{
		div = nb / 10;
		mod = nb % 10;
		ft_putnbr (div);
		ft_putnbr (mod);
	}
	else
	{
		value = nb +48;
		write (1, &value, 1);
	}
}
