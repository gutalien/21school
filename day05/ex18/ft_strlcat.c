unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	l;

	len = 0;
	while (dest[len])
		len++;
	l = len;
	while (src[len-l])
		len++;
	while (l + 1 < size && *src)
		dest[l++] = *src++;
	if (l + 1 == size)
		dest[l] = '\0';
	return (len);	
}
