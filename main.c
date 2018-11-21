#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <libc.h>

int	main(int ac, char **argv)
{
	char	*tab;
	ac++;

	printf("%s", ft_itoa(atoi(argv[1])));
}
