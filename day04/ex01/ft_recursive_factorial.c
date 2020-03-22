int		ft_recursive_factorial(int nb)
{
	int f;

	if (nb > 12 || nb < 0)
		return (0);
	f = 1;
	if (nb > 1)
		f = nb * ft_recursive_factorial(nb - 1);
	return (f);
}
