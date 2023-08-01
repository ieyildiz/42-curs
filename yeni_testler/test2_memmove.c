#include "libft.h"

int main()
{
    char *src = "123456789";
    char *dst = "123456789";
    
    ft_memmove(dst, src, 6);
    printf("%s", dst);
}