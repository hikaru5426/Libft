/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:31 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/22 15:06:52 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	idx;

	len_dst = ft_strlen(dst);
	idx = 0;
	while (src[idx] && (idx + len_dst + 1 < size))
	{
		dst[len_dst + idx] = src[idx];
		idx++;
	}
	dst[len_dst + idx] = '\0';
	if (len_dst >= size)
		return (size + ft_strlen(src));
	return (len_dst + ft_strlen(src));
}
