#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 12;
	int b = 5;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);
	printf("%d %d", *div, *mod);
	return(0);
}

