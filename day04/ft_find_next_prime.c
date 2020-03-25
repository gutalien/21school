#include <stdio.h>
#include <limits.h>

int		ft_find_next_prime(int nb)
{
	int i;
	int p;

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

int		main(void)
{
	int n[] = {-10, 0, 1, 2, 3, 4, 5, 11, 33, 189, 1000000, 2147483641, INT_MAX, 666};
	int p;
	int i = 0;

	while (n[i] != 666)
	{
		p = ft_find_next_prime(n[i]);
		printf("%i\t%i\n", n[i], p);
		i++;
	}

	return (0);	
}
