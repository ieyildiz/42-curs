#include "libft.h"

int main()
{
    char deneme[] = "42 istanbul";

    char *r;

    r = ft_strchr(deneme, 'u');

    printf("%s\n", r);

    /*
    * istenilen karakteri strigin hangi index ne döner
    */
    const char *str = "hello world!";
    char *ptr = ft_strchr(str, 'o');

    if (ptr != NULL) {
        printf("Found character 'o' at index: %ld\n", ptr - str);
        printf("%s\n", ptr);
    } else {
        printf("Character 'o' not found.\n");
    }

    if (!(str = ft_strchr(str2, '\0')))                                                                ft_print_result("NULL");                                                                   else                                                                                           {                                                                                                  ft_print_result(str);                                                                          if (str != str2 + 7)                                                                               ft_print_result("\nReturn value is false");                                            }  
}