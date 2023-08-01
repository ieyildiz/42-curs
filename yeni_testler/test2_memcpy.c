#include "libft.h"

int main()
{
    char s1[] = "hello";
    char *s2 = "selam";

    ft_memcpy(s1, s2, strlen(s2));

    printf("test1:%s\n", s1);
}