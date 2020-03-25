#include <stdio.h>
#include <limits.h>

int		ft_is_prime(int nb)
{
	int i;
	int p;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	i = 3;
	while (nb % i && i < 46341)
		i += 2;
	p = (nb % i) ? 1 : 0;
	printf("(%i) ", i);
	return (p);	
}

int		main(void)
{
	int n[] = {-10, 0, 1, 2, 3, 4, 5, 11, 33, 199, INT_MAX};
	int m = 11;
	int p;
	int i = 0;

	while (i < m)
	{
		p = ft_is_prime(n[i]);
		printf("%i\t%i\n", n[i], p);
		i++;
	}

	return (0);	
}
