#include "libft.h"

int main()
{
    char *str = "selam 42";
    char *r;
    
    r = ft_memchr(str, '4', ft_strlen(str));

    printf("4 sayisi index: 6 -test1:%ld",str-r);
}