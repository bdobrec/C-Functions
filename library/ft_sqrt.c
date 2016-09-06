int 	ft_sqrt(int nb)
{
	int i;
	int square;

	i = 0;
	square = 0;
	while (i < nb / 2)
	{
		square = i * i;
		if (square == nb)
		   return (i);
		i++;
	}
	return (0);
}
