void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;

	ft_swap(&a, &b);
	printf("%d %d", a, b);
}
