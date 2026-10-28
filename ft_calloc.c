/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:38:48 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/28 13:39:13 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*res;
	size_t			idx;

	if (size != 0 && ((size_t)-1 / size < num))
		return (NULL);
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
