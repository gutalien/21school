#include <stdio.h>
#include <limits.h>

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

int		main(void)
{
	int n[] = {9, 25, -82, 0, 987, 1024, 1000000, 2147395600, INT_MAX};
	int nn = 9;
	int s;
	int i = 0;

	while (i < nn)
	{
		s = ft_sqrt(n[i]);
		printf("%i\t= %i\n", n[i], s);
		i++;	
	}
	
	return (0);
}
