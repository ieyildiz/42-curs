/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:02:55 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/30 00:35:38 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * Stringleri güvenli bir şekilde kopyalamak için
	 * dstsize: kopyalanmak istenen uzunluk
	 * return --> kaynak uzunluğu
	 * */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	if (dstsize != 0)
	{
		while ((i < dstsize - 1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
