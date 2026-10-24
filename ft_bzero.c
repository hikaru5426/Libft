/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:38:45 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/17 10:01:33 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			idx;
	unsigned char	*s_tmp;

	idx = 0;
	s_tmp = s;
	while (idx < n)
	{
		s_tmp[idx] = '\0';
		idx++;
	}
}
