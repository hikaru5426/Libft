/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:20 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/17 10:01:03 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count )
{
	unsigned char	*dest_tmp;
	int				idx;

	dest_tmp = (unsigned char *)dest;
	idx = 0;
	while (count > 0)
	{
		dest_tmp[idx] = ch;
		idx++;
		count--;
	}
	return (dest);
}
