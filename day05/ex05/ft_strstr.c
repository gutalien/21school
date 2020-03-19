char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str[i] && to_find[i])
	{
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
