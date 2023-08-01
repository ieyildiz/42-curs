#include "libft.h"

int main()
{
    char src[] = "lorem ipsum dolor sit amet";

    ft_memset(src, '@', 11);
    printf("%s", src);
}