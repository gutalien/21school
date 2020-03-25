int		ft_find_next_prime(int nb)
{
	int i;

	if (nb == 2 || nb == 3)
		return (nb);
	if (nb <= 1)
		return(2);
	nb = (nb % 2) ? nb : nb +1;
	while (nb < 2147483647)
	{
		i = 3;
		while (nb % i && i * i < nb && i < 46341)
			i += 2;
		if (nb % i != 0)
			return (nb);
		nb += 2;
	}
	return (nb);
}
