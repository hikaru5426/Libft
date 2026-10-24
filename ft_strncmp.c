/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:40 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/22 15:55:18 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t count)
{
	size_t	idx;

	idx = 0;
	while (idx < count && (s1[idx] || s2[idx]))
	{
		if (s1[idx] - s2[idx])
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
		idx++;
	}
	return (0);
}
