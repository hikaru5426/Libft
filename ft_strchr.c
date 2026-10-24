/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:22 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/22 15:32:47 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int				idx;
	char			*tmp_str;
	unsigned char	chr;

	idx = 0;
	tmp_str = (char *)str;
	chr = ch;
	while (tmp_str[idx])
	{
		if (tmp_str[idx] == chr)
			return (&tmp_str[idx]);
		idx++;
	}
	if (tmp_str[idx] == chr)
		return (&tmp_str[idx]);
	return (NULL);
}
