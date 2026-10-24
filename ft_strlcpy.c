/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:34 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/22 14:38:58 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	idx;

	idx = 0;
	while (idx + 1 < size && src[idx])
	{
		dst[idx] = src[idx];
		idx++;
	}
	if (size > 0)
		dst[idx] = '\0';
	return (ft_strlen(src));
}
