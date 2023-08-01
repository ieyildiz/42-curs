#include "libft.h"

int main()
{
    char kaynak[] = "42 istanbul(15)";
    char hedef[20];

    size_t kaynak_boyu = ft_strlcpy(hedef, kaynak, sizeof(kaynak));
    printf("hedef: %s ve istenilen boyut: %ld\n", hedef, kaynak_boyu);

    size_t kaynak_boyu1 = ft_strlcpy(hedef, kaynak, 6);
    printf("hedef: %s ve istenilen boyut: %ld\n", hedef, kaynak_boyu1);

    size_t kaynak_boyu2 = ft_strlcpy(hedef, kaynak, 0);
    printf("hedef: %s ve istenilen boyut: %ld\n", hedef, kaynak_boyu2);

    char hedef1[] = "42 Paris(12)";

    size_t kaynak_boyu3 = ft_strlcpy(hedef1, kaynak, sizeof(kaynak));
    printf("hedef: %s ve istenilen boyut: %ld\n", hedef1, kaynak_boyu3);

    size_t kaynak_boyu4 = ft_strlcpy(hedef1, kaynak, 6);
    printf("hedef: %s ve istenilen boyut: %ld\n", hedef1, kaynak_boyu4);

    size_t kaynak_boyu5 = ft_strlcpy(hedef1, kaynak, 0);
    printf("hedef: %s ve istenilen boyut: %ld\n", hedef1, kaynak_boyu5);

    return (0);
}