/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:11:28 by iyildiz           #+#    #+#             */
/*   Updated: 2023/08/01 15:13:06 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	j;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	i = 0;
	j = len - 1;
	while (i <= len / 2 && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j >= len / 2 && ft_strchr(set, s1[j]) != NULL)
		j--;
	if (i > j)
		return (ft_strdup(""));
	len = j - i;
	return (ft_substr(s1, i, len + 1));
}
