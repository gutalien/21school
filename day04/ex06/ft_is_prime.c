int		ft_is_prime(int nb)
{
	int i;
	int p;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	i = 3;
	while (nb % i && i * i < nb && i < 46341)
		i += 2;
	p = (nb % i) ? 1 : 0;
	return (p);	
}
