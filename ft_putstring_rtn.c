#include "libft.h"

int	ft_putstring_rtn(char *str)

{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}