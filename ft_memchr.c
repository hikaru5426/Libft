/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:09 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/23 14:09:43 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t count)
{
	size_t			idx;
	unsigned char	*tmp_str;
	unsigned char	chr;

	idx = 0;
	tmp_str = (unsigned char *)str;
	chr = (unsigned char)ch;
	while (idx < count)
	{
		if (tmp_str[idx] == chr)
			return ((void *)&tmp_str[idx]);
		idx++;
	}
	tmp_str = NULL;
	return ((void *)tmp_str);
}
