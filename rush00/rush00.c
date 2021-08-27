#include	<unistd.h>

void	ft_putchar(char	a);

void	ft_putimpress(int x, int y, int x_coluna, int y_linha);

void	rush(int x, int y)
{
	int	x_column;
	int	y_line;

	y_line = 1;
	if (x != 0 && y != 0 && x > 0 && y > 0)
	{
		while (y_line <= y)
		{
			x_column = 1;
			while (x_column <= x)
			{
				ft_putimpress(x, y, x_column, y_line);
				x_column++;
			}
			ft_putchar('\n');
			y_line++;
		}
	}
}

void	ft_putimpress(int x, int y, int x_column, int y_line)
{
	if (y_line == 1 && (x_column == 1 || x_column == x))
	{
		ft_putchar('o');
	}
	else if (y_line == y && (x_column == 1 || x_column == x))
	{
		ft_putchar('o');
	}
	else if ((y_line == 1 || y_line == y) && (x_column != 1 || x_column != x))
	{
		ft_putchar('-');
	}
	else if ((y_line != 1 || y_line != y) && (x_column == 1 || x_column == x))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
