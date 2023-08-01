/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:11:06 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/31 20:19:00 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * locates the first occurrence of c in the string pointed by s.
	 */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
