unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	l;

	len = 0;
	while (src[len])
		len++;
	l = 0;
	while (l + 1 < size && *src)
		dest[l++] = *src++;
	dest[l] = '\0';
	return (len);	
}
