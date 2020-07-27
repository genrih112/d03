void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	return;
}

void main()
{
	int div, mod, *d, *m;
	d = &div;
	m = &mod;
	ft_div_mod(7, 3, d, m);
	div = div+48;
	mod = mod+48;
	write(1, &div, 1);
	write(1,"\t",1);
	write(1, &mod, 1);
	return;
}
