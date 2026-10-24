/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:17 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/23 14:32:34 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	int				idx;
	int				sign;
	unsigned char	*uc_dest;
	unsigned char	*uc_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	if (uc_dest > uc_src)
	{
		idx = count - 1;
		sign = -1;
	}
	else
	{
		idx = 0;
		sign = 1;
	}
	while (idx >= 0 && idx < (int)count)
	{
		uc_dest[idx] = uc_src[idx];
		idx += sign;
	}
	return (dest);
}
