/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:25:58 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/31 21:30:19 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 It is used to convert a string 
 of characters representing an integer into an actual integer value.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	convert;
	int	sign;
	int	i;

	convert = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		convert = (convert * 10) + (str[i] - '0');
		i++;
	}
	convert = convert * sign;
	return (convert);
}
