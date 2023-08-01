#include "libft.h"

int main()
{
    const char *s1 = "aaa";
    const char *s2 = "aaa";

    size_t n;
    int r;
    int k;

    n = 3;
    r = ft_strncmp(s1, s2, n);
    printf(": %d\n", r);
    
    int a = ft_strncmp("/", "/", 1);
    printf(": %d\n", a);

    int c = ft_strncmp("2", "0", 1);
    printf(": %d\n", c);

    k = ft_strncmp("test\200", "test\0", 6);
    printf(": %d\n", k);
}