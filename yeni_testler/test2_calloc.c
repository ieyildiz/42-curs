#include "libft.h"

int main()
{
    char *str;

    str = (char *)ft_calloc(30, 1);
    if (!str)
        write(1, "NULL", 4);
    else
        write(1, str, 30);

    return (0);
}