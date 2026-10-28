/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 18:07:34 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/28 13:27:20 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int		idx;
	int		count;
	char	*str_trimmed;
	int		max_idx;
	int		idx2;

	idx = 0;
	max_idx = ft_strlen(str) - 1;
	while (idx <= max_idx && ft_strchr(set, str[idx]))
		idx++;
	while (max_idx >= idx && ft_strchr(set, str[max_idx]))
		max_idx--;
	count = max_idx - idx + 1;
	str_trimmed = malloc((count + 1) * sizeof(char));
	if (str_trimmed == NULL)
		return (NULL);
	idx2 = 0;
	while (idx <= max_idx)
	{
		str_trimmed[idx2] = str[idx];
		idx2++;
		idx++;
	}
	str_trimmed[count] = '\0';
	return (str_trimmed);
}
