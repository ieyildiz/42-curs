/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:26:34 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/28 19:09:11 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}