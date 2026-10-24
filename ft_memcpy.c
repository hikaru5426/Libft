/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:15 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/23 14:30:47 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t			idx;
	unsigned char	*dest_tmp;
	unsigned char	*src_tmp;

	if (dest == NULL && src == NULL)
		return (NULL);
	idx = 0;
	dest_tmp = dest;
	src_tmp = (unsigned char *)src;
	while (idx < count)
	{
		dest_tmp[idx] = src_tmp[idx];
		idx++;
	}
	return (dest);
}
