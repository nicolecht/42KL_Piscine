#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str[10] = "0678s90";

	printf("%d", ft_str_is_numeric(str));
	return (0);
}
