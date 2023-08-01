#include "libft.h"

int main()
{
    char s1[] = "aac";
    char s2[] = "aad";
    int r;

    r = ft_memcmp(s1, s2, strlen(s1));
    printf("test1: %d", r);
}