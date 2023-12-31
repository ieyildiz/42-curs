/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:12:31 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/30 17:58:08 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/* *** */
/*#include "libft.h"*/
/* *** */
/*int	ft_memcmp(const void *s1, const void *s2, size_t n)*/
/*{*/
/*	size_t		i;*/
/*	const char	*str1 = (const char *)s1;*/
/*	const char	*str2 = (const char *)s2;*/
/* *** */
/*	i = 0;*/
/*	while (i < n)*/
/*	{*/
/*		if (str1[i] != str2[i])*/
/*		{*/
/*			if (str1[i] > str2[i])*/
/*			{*/
/*				return (1);*/
/*			}*/
/*			else*/
/*			{*/
/*				return (-1);*/
/*			}*/
/*		}*/
/*		i++;*/
/*	}*/
/*	return (0);*/
/*}*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
