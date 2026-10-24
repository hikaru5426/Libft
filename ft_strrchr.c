/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:45 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/22 15:33:04 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int				idx;
	char			*tmp_str;
	char			*last_ch_found;
	unsigned char	chr;

	idx = 0;
	last_ch_found = NULL;
	tmp_str = (char *)str;
	chr = ch;
	while (tmp_str[idx])
	{
		if (tmp_str[idx] == chr)
			last_ch_found = &tmp_str[idx];
		idx++;
	}
	if (tmp_str[idx] == chr)
		last_ch_found = &tmp_str[idx];
	return (last_ch_found);
}
