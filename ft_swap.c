void ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	return;
}

void main()
{
	int x, y, *a, *b;
	a = &x;
	b = &y;
	x = 1;
	y = 9;
	ft_swap(a, b);
	x = x+48;
	y = y+48;
	write(1, "x", 1);
	write(1, &x, 1);
	write(1, "y", 1);
	write(1, &y, 1);
	return;
}
