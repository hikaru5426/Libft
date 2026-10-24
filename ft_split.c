/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:49:30 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/23 17:07:24 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(const char *str, char sep)
{
	size_t	idx;
	size_t	nb_words;

	idx = 0;
	nb_words = 0;
	if (str[idx] == sep)
		idx++;
	else if (str[idx] && str[idx] != sep)
	{
		nb_words++;
		idx++;
	}
	while (str[idx])
	{
		if (str[idx - 1] == sep && str[idx] != sep)
			nb_words++;
		idx++;
	}
	return (nb_words);
}

static char	*ft_create_word(const char *str, char sep)
{
	char	*word;
	size_t	idx;
	size_t	len;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	word = malloc((len + 1) * sizeof(char));
	idx = 0;
	while (idx < len)
	{
		word[idx] = str[idx];
		idx++;
	}
	word[idx] = '\0';
	return (word);
}

static char	*ft_start(const char *str, char sep, size_t *idx, size_t *word)
{
	if (str[*idx] == sep)
	{
		(*idx)++;
	}
	else if (str[*idx])
	{
		(*word)++;
		(*idx)++;
		return (ft_create_word(&str[0], sep));
	}
	return (NULL);
}

char	**ft_split(char const *str, char sep)
{
	char	**tab;
	size_t	idx;
	size_t	word;

	tab = malloc((ft_count_word(str, sep) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	idx = 0;
	word = 0;
	tab[0] = ft_start(str, sep, &idx, &word);
	while (str[idx])
	{
		if (str[idx - 1] == sep && str[idx] != sep)
		{
			tab[word] = ft_create_word(&str[idx], sep);
			word++;
		}
		idx++;
	}
	tab[word] = NULL;
	return (tab);
}
