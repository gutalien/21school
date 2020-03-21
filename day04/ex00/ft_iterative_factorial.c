int		ft_iterative_factorial(int nb)
{
	int f;
	int i;

	f = 1;
	i = 1;
	if (nb > 12 or nb < 0)
		return (0);
	while (i <= nb)
		f *= i++;
	return (f);
}
