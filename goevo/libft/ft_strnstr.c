/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:13:11 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/30 17:58:35 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/** 	The strnstr() function locates the first occurrence of the null-termi-*/
/**	nated string s2 in the string s1, where not more than n characters are*/
/**	searched.  Characters that appear after a `\0' character are not*/
/**	searched.*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while ((*haystack != '\0') && (len >= needle_len))
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
		{
			return ((char *)(haystack));
		}
		haystack++;
		len--;
	}
	return (NULL);
}
