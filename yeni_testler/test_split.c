#include "libft.h"

int main()
{
    char *s;
    char **a;

    s = " Hello , World";
    a = ft_split(s, ',');
    printf("%s\n", a[0]);
    printf("%s\n", a[1]);
    printf("%s", a[2]);
}