/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:10:58 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/31 13:27:55 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*split fonksiyonu ile verilen bir stringin*/
/*belirtilen karakter ile alt stringlere bölmek için kullanırız.*/
/**count_word fonksiyonu ile kelime sayısını öğreniriz ex.*/
/*for "hello, world" --> 2*/
/**size_word fonks. ile kelimenin uzunluğunu buluruz ex for "hello"*/
/*sub string --> 5*/
/**free fonksiyonu ile dinamik olarak(runtime) tahsis edilen belleği  */
/*serbest bırakır.*/
/*Ex. for NULL --> yani tahsis edilen*/
/*bölgeye yapıştırılan string boş ise free fonskiyonu kullanarak*/
/*bir anlamda allocate edilen memmory silinir.*/
/**return --> tüm sub strinleri gösterir.*/
#include "./libft.h"

int	ft_count_word(char const *s, char c)
{
	size_t	word;

	while (*s != '\0' && *s == c)
		s++;
	if (*s != '\0')
		word = 1;
	else
		word = 0;
	while (*s)
	{
		if (*s == c && s[1] && s[1] != c)
			word++;
		s++;
	}
	return (word);
}

int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		j;

	i = 0;
	j = -1;
	word = ft_count_word(s, c);
	strs = (char **)malloc((word + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		strs[j] = ft_substr(s, i, ft_size_word(s, c, i));
		if (!(strs[j]))
			return (ft_free(strs, j));
		i += ft_size_word(s, c, i);
	}
	strs[j] = 0;
	return (strs);
}
/*
 *int main()
 *{
 *	char *s;
 *  char **a;
 *  s = " Hello , World";
 *  a = ft_split(s, ',');
 *  printf("%s\n", a[0]);
 *  printf("%s\n", a[1]);
 *  printf("%s", a[2]);
 *}
 */
