#include "libft.h"

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int main()
{
    char *str;
    char str2[] = "bonjour";
    char *r;

    r = ft_strrchr(str2, 'u');

    printf(": %s\n", r);

	if (!(str = ft_strrchr(str2, '\0')))
		ft_print_result("NULL");
	else
	{
		ft_print_result(str);
		if (str != str2 + 7)
			ft_print_result("\nReturn value is false");
	}
}