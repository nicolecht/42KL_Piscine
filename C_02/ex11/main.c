#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int main(void)
{
	char str[] = "Coucou\ntu vas bien?";

	ft_putstr_non_printable(str);
	return (0);
}
