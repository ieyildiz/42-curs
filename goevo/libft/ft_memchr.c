/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:12:25 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/31 23:47:46 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *A pointer to the matching byte
 */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
		{
			return ((unsigned char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
