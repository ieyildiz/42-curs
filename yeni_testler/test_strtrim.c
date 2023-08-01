#include "libft.h"

int main()
{
    char *s1= "lorem \n ipsum \t dolor \n sit \t amet";
    char *set= " ";
    char *a;
    a = ft_strtrim(s1, set);

    printf("test:%s\n", a);
}