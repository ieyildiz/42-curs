#include "libft.h"

int main()
{
    ft_putendl_fd("lorem ipsum dolor sit amet", 2);
    ft_putendl_fd("  lorem\nipsum\rdolor\tsit amet  ", 1);
    ft_putendl_fd("lorem ipsum do\0lor sit amet", 1);
    ft_putendl_fd("", 2);
}