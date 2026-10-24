/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:38:30 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/17 10:13:30 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*str;
	size_t	idx;

	str = NULL;
	len = ft_strlen(src);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (str);
	idx = 0;
	while (src[idx])
	{
		str[idx] = src[idx];
		idx++;
	}
	str[idx] = '\0';
	return (str);
}
