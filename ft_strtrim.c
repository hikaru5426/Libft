/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 18:07:34 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/23 18:52:55 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *str, char const *set, size_t len_sep)
{
	size_t	idx;
	size_t	count;
	
	idx = 0;
	count = 0;
	while (str[idx])
	{
		if (ft_memcmp(&str[idx], set, len_sep) == 0)
			idx += len_sep;
		else
		{
			count++;
			idx++;
		}
	}
	return (count);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	idx;
	size_t	count;
	size_t	len_sep;
	char	*str_trimmed;
	size_t	idx2;

	idx = 0;
	idx2 = 0;
	len_sep = ft_strlen(set);
	count = ft_count(str, set, len_sep);
	str_trimmed = malloc((count + 1) * sizeof(char));
	if (str_trimmed == NULL)
		return (NULL);
	while (str[idx])
	{
		if (ft_memcmp(&str[idx], set, len_sep) == 0)
			idx += len_sep;
		else
		{
			str_trimmed[idx2] = str[idx];
			idx2++;
			idx++;
		}
	}
	return (str_trimmed);
}
