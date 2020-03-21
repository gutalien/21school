#include <stdlib.h>

int					*ft_range(int min, int max)
{
	unsigned int	len;
	int				*r;

	if (max > min)
		len = max - min;
	else
		return (NULL);
	r = (int *)malloc(sizeof(int) * len);
	if (r)
		while (len)
			r[--len] = --max;
	return (r);
}
