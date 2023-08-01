#include "libft.h"
#include <stdlib.h>

int main()
{
    const char* str = "lorem ipsum dolor sit amet";

    char* result;

    result = ft_substr(str, 0, 10);
    printf("%s", result);
}