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
	while (nb % i && i * i < nb && i < 46341)
		i += 2;
	p = (nb % i) ? 1 : 0;
	printf("(%i) ", i);
	return (p);	
}

int		main(void)
{
	int n[] = {-10, 0, 1, 2, 3, 4, 5, 11, 33, 199, 2147483645, INT_MAX, 666};
	// int n[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 666};
	int p;
	int i = 0;

	while (n[i] != 666)
	{
		p = ft_is_prime(n[i]);
		printf("%i\t%i\n", n[i], p);
		i++;
	}

	return (0);	
}
