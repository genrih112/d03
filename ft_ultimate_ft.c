void ft_ultimate_ft(int ***nbr)
{
	***nbr = 8;
	return;
}

void main()
{
	int n = 0;
	int *k, **l, ***nbr;
	k = &n;
	l = &k;
	nbr = &l;
	ft_ultimate_ft(nbr);
	n = n+48;
	write(1, &n, 1);
	return;
}
