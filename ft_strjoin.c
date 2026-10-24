/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:26:49 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/23 17:09:29 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	idx;
	size_t	idx2;

	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	idx = 0;
	while (s1[idx])
	{
		str[idx] = s1[idx];
		idx++;
	}
	idx2 = 0;
	while (s2[idx2])
	{
		str[idx + idx2] = s2[idx2];
		idx2++;
	}
	str[idx + idx2] = '\0';
	return (str);
}
