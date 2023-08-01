#include "libft.h"

int main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	ft_memmove(dest, "consectetur", 5);
	printf("%s", dest);
}