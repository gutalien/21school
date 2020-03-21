#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int f;
	int i;

	f = 1;
	i = 1;
	if (nb > 12 || nb < 0)
		return (0);
	while (i <= nb)
		f *= i++;
	return (f);
}

int	main(void)
{
	int f;
	int n;

	n = -3;
	while (n < 15)
	{
		f = ft_iterative_factorial(n);
		printf("%i!\t= %i\n", n, f);
		n++;
	}
	return (0);
}
