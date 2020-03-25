int		ft_sqrt(int nb)
{
	int s;
	int s0;
	int i;

	if (nb <= 0)
		return (0);
	i = 0;
	s0 = nb;
	while(s0 > 10)
		s0 /= 10 + 0 * i++;
	s = (i) ? i * 5 : 1;
	s0 = 0;
	while (s * s != nb && s != s0)
	{
		s0 = s;
		s = (nb / s0 + s0) / 2;
	}
	if (s * s != nb)
		s = 0; 
	return (s);
}
