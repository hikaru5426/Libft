/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:38:48 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/22 17:15:31 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*res;
	size_t			idx;

	res = NULL;
	res = malloc(num * size);
	if (res == NULL)
		return (NULL);
	idx = 0;
	while (idx < num * size)
	{
		res[idx] = 0;
		idx++;
	}
	return (res);
}
