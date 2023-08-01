#include "libft.h"

int main()
{
    char *str1;
    char *str2;
    char *str3;

    str1 = ft_itoa(-47);
    printf("test1:%s\n", str1);
    str2 = ft_itoa(+475);
    printf("test1:%s\n", str2);
    str3 = ft_itoa(-2147483648LL);
    printf("test1:%s\n", str3);
}