#include "libft.h"

int main()
{
    printf(":%d\n", ft_atoi("000074"));
    printf(":%d\n", ft_atoi("+-54"));
    printf(":%d\n", ft_atoi("--47"));
    printf(":%d\n", ft_atoi("+47+5"));
    printf(":%d\n", ft_atoi("\e475"));
    printf(":%d\n", ft_atoi("\t\n\r\v\f  469 \n"));
    printf(":%d\n", ft_atoi("-2147483648"));
    printf(":%d\n", ft_atoi("2147483647"));
    printf("(469):%d\n", ft_atoi("\t\n\r\v\f  469 \n"));
    printf(":%d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
    printf(":%d\n", ft_atoi(""));   
}