#include <stdio.h>
#include <string.h>
#include "strlcat.h"
// original BSD strlcat code

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

int		main(void)
{
	// dest strings for BSD system strlcat
	char sd1[10] = {"Hello"};
	char sd2[20] = {"Hello"};
	char sd3[10] = {"\0"};
	char sd4[10] = {"Hello"};
	char sd5[10] = {"\0"};
	char sd6[6] = {"Hello"};
	// dest strings for ft_strlcat
	char td1[10] = {"HELLO"};
	char td2[20] = {"HELLO"};
	char td3[10] = {"\0"};
	char td4[10] = {"HELLO"};
	char td5[10] = {"\0"};
	char td6[6] = {"HELLO"};

	// scr string
	char s[] = {", world!"};
	char s0[]= {"\0"};

	int size;
	int ld = strlen(sd1);
	int ls = strlen(s);
	int l0 = strlen(s0);

	printf("%i\t%s\n", ld, sd1);
	printf("%i\t%s\n", ls, s);
	printf("%i\t%s\n", l0, s0);
	printf("---\n");

	size = 10;
	ld = strlcat(sd1, s, size);
	printf("%i\t%s\n", ld, sd1);
	size = 20;
	ld = strlcat(sd2, s, size);
	printf("%i\t%s\n", ld, sd2);
	ld = strlcat(sd2, s, size);
	size = 10;
	ld = strlcat(sd3, s, size);
	printf("%i\t%s\n", ld, sd3);
	size = 10;
	ld = strlcat(sd4, s0, size);
	printf("%i\t%s\n", ld, sd4);
	size = 10;
	ld = strlcat(sd5, s0, size);
	printf("%i\t%s\n", ld, sd5);
	size = 6;
	ld = strlcat(sd6, s, size);
	printf("%i\t%s\n", ld, sd6);
	printf("---\n");

	size = 10;
	ld = ft_strlcat(td1, s, size);
	printf("%i\t%s\n", ld, td1);
	size = 20;
	ld = ft_strlcat(td2, s, size);
	printf("%i\t%s\n", ld, td2);
	size = 10;
	ld = ft_strlcat(td3, s, size);
	printf("%i\t%s\n", ld, td3);
	size = 10;
	ld = ft_strlcat(td4, s0, size);
	printf("%i\t%s\n", ld, td4);
	size = 10;
	ld = ft_strlcat(td5, s0, size);
	printf("%i\t%s\n", ld, td5);
	size = 6;
	ld = ft_strlcat(td6, s, size);
	printf("%i\t%s\n", ld, td6);

	return (0);	
}
