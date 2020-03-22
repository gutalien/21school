int		ft_fibonacci(int index)
{
	int f;
	
	if (index < 0)
		f = -1;
	else
		if (index > 1)
			f = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		else
			f = index;
	return (f);
}
