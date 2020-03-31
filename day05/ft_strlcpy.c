#include <stdio.h>
#include <string.h>
#include "strlcpy.h"
// original BSD strlcat code

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

int		main(void)
{
	// dest strings for BSD system strlcat
	char sd1[10] = {"Hello"};
	char sd2[20] = {"Hello, world!"};
	char sd3[10] = {"\0"};
	// dest strings for ft_strlcat
	char td1[10] = {"HELLO"};
	char td2[20] = {"HELLO, WORLD!"};
	char td3[10] = {"\0"};

	// scr string
	char s[] = {"It's my life!"};
	char s0[]= {"\0"};

	int size;
	unsigned int ld;

	size = 10;
	ld = strlcpy(sd1, s, size);
	printf("%i\t%s\n", ld, sd1);
	size = 20;
	ld = strlcpy(sd2, s, size);
	printf("%i\t%s\n", ld, sd2);
	ld = strlcpy(sd2, s, size);
	size = 3;
	ld = strlcpy(sd3, s, size);
	printf("%i\t%s\n", ld, sd3);
	size = 10;
	ld = strlcpy(sd1, s0, size);
	printf("%i\t%s\n", ld, sd1);
	size = 20;
	ld = strlcpy(sd2, s0, size);
	printf("%i\t%s\n", ld, sd2);
	size = 3;
	ld = strlcpy(sd3, s0, size);
	printf("%i\t%s\n", ld, sd3);
	printf("---\n");

	size = 10;
	ld = ft_strlcpy(td1, s, size);
	printf("%i\t%s\n", ld, td1);
	size = 20;
	ld = ft_strlcpy(td2, s, size);
	printf("%i\t%s\n", ld, td2);
	size = 2;
	ld = ft_strlcpy(td3, s, size);
	printf("%i\t%s\n", ld, td3);
	size = 10;
	ld = ft_strlcpy(td1, s0, size);
	printf("%i\t%s\n", ld, td1);
	size = 20;
	ld = ft_strlcpy(td2, s0, size);
	printf("%i\t%s\n", ld, td2);
	size = 2;
	ld = ft_strlcpy(td3, s0, size);
	printf("%i\t%s\n", ld, td3);

	return (0);	
}
