/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:26:32 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/23 15:26:33 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t max_len)
{
	char	*substr;
	size_t	idx;
	size_t	len;

	idx = 0;
	len = 0;
	if (start <= ft_strlen(s))
	{
		while (s[start + idx] && idx < max_len)
			idx++;
		if (s[start + idx] && idx < max_len)
			idx++;
	}
	len = idx;
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	idx = 0;
	while (idx < len && s[start + idx])
	{
		substr[idx] = s[start + idx];
		idx++;
	}
	substr[idx] = '\0';
	return (substr);
}
