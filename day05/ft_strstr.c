#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str[i] && to_find[i])
	{
		//printf("%c", str[i]);
		while (str[i] == to_find[i] && str[i] && to_find[i])
			i++;
		if (str[i] && to_find[i])
		{
			i = 0;
			str++;
		}
	}
	if (to_find[i] != '\0')
		str = NULL;
	return (str);
}

int	main(void)
{
	char str[] = "Hello Worwoworld! aaargh...";
	char find[] = "aar";
	char *s;

	printf("%s\t->\t%s\n", find, str);
	s = ft_strstr(str, find);
	printf("result:\t\t%s\n", s);
	return (0);
}
