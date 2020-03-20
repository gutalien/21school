#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_atoi(char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while (*str <= ' ' && *str)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		if (*str == '+')
			sign = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0') * sign;
		str++;
	}
	return (num);
}

int	main(void)
{
	char s1[] = "--123654";
	char s2[] = "\t+456ad";
	char s3[] = "a6cd3";
	char s4[] = "";
	char s5[] = "-2147483648"; // INT_MIN
	char s6[] = "+2147483647"; // INT_MAX
	char s7[] = "0";
	char s8[] = "-0";
	char s9[] = "+0";
	char s10[]= "9";
	char s11[]= "2147483648"; // INT_MAX+1
	char s12[]= "++5";
	char s13[]= "21474836555"; // INT_MAX++++
	char s14[]= "-2147483649"; // INT_MIN-1
	char s15[]= "-214748369999"; // INT_MIN----
	char s16[]= "\t \r\n\v1";
	char s17[]= "3.1415";
	char s18[]= "36,6";
	char s19[]= "+-9";
	char s20[]= "O";

	char *str[] = { s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20};
	int s = 20;

	int n;
	int i;

	i = 0;
	while (i < s)
	{
		printf("str:\t%s\n", str[i]);
		n = atoi(str[i]);
		printf("atoi:\t%i\n", n);
		n = ft_atoi(str[i]);
		printf("ft:\t%i\n", n);
		printf("---\n");
		i++;
	}

	return (0);
}
