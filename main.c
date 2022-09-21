#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char *dest;
  dest = (char *)malloc(sizeof(*dest) * 15);
  memset(dest, 0, 15);
  memset(dest, 'r', 15);
  printf("%lu\n",ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
  printf("%s\n", dest);
  return (0);
}
