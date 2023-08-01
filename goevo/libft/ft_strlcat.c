/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:12:58 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/30 11:01:48 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * stringleri güvenli bir şekilde birleştirmek için
	 * return --> destination + source(dstsize kadar)
	 * 
	 */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	src_len = 0;
	dst_len = ft_strlen(dst);
	while (src[src_len] != '\0' && dst_len + 1 < dstsize)
	{
		dst[dst_len] = src[src_len];
		dst_len++;
		src_len++;
	}
	dst[dst_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[src_len]));
}
