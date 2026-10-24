/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:12 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/22 15:30:10 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *s1, const void *s2, size_t count)
{
	size_t				idx;
	const unsigned char	*tmp_s1;
	const unsigned char	*tmp_s2;

	idx = 0;
	tmp_s1 = s1;
	tmp_s2 = s2;
	while (idx < count)
	{
		if (tmp_s1[idx] - tmp_s2[idx])
			return (tmp_s1[idx] - tmp_s2[idx]);
		idx++;
	}
	return (0);
}
