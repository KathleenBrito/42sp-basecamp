void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	if (d != 0)
	{
		*a = c / d;
		*b = c % d ;
	}
	else
	{
		*a = 0;
		*b = 0;
	}
}
