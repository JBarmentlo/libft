

#include "libft.h"
#include <stdio.h>
#include <libc.h>

int	main(int ac, char **av)
{
	char	*str;

	str = (char*)malloc(20);
	ft_memset(str, 48, 5);
	ft_putstr(str); 
}
