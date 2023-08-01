#include "libft.h"

int main()
{
    const char *s1 = "42ecoleVadi";
    const char *s2 = "Vadi";

    char *r;

    r = ft_strnstr(s1, s2, 12);

    printf(" %s\n", r);
}
