/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:42 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/22 15:33:55 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub_str, size_t len)
{
	size_t	idx;
	size_t	len_sub_str;

	idx = 0;
	len_sub_str = ft_strlen(sub_str);
	if (len_sub_str == 0)
		return ((char *)str);
	while (str[idx] && idx < len && len_sub_str <= len - idx)
	{
		if (ft_strncmp(&str[idx], sub_str, len_sub_str) == 0)
			return ((char *)&str[idx]);
		idx++;
	}
	return (NULL);
}
