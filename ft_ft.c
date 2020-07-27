void ft_ft(int *nbr)
{
	*nbr = 4;
	return;
}

void main()
{
	int n = 0;
	int *nbr;
	nbr = &n;
	ft_ft(nbr);
	n = n+48;
	write(1, nbr, 1);
	return;
}
