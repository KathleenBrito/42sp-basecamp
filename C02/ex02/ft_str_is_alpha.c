int	ft_str_is_alpha(char *str)
{
	int	result;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			result = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			result = 1;
		}
		else
		{
			result = 0;
			return (0);
		}
		i++;
	}
	return (1);
}
