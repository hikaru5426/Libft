/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:31:48 by hikaru            #+#    #+#             */
/*   Updated: 2026/10/25 15:11:50 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digit(long nbr)
{
	size_t	len;

	len = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		len += 1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		idx;
	long	nbr;
	int		is_negative;

	is_negative = 0;
	nbr = nb;
	idx = ft_count_digit(nbr);
	if (nbr < 0)
	{
		is_negative = 1;
		nbr = -nbr;
	}
	str = malloc((idx + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[idx--] = '\0';
	while (idx >= is_negative)
	{
		str[idx--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
