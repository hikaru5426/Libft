/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:49:30 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/28 13:17:13 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(const char *str, char sep)
{
	size_t	idx;
	size_t	nb_words;

	idx = 0;
	nb_words = 0;
	while (str[idx])
	{
		if (str[idx] == sep)
			idx++;
		else
		{
			nb_words++;
			while (str[idx] && str[idx] != sep)
				idx++;
		}
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
	if (word == NULL)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		word[idx] = str[idx];
		idx++;
	}
	word[idx] = '\0';
	return (word);
}

static void	ft_free_tab(char **tab, size_t nb_words)
{
	while (nb_words > 0)
	{
		nb_words--;
		free(tab[nb_words]);
	}
	free(tab);
}

static int	ft_fill_tab(char **tab, const char *str, char sep)
{
	size_t	idx;
	size_t	word;

	idx = 0;
	word = 0;
	while (str[idx])
	{
		if (str[idx] == sep)
			idx++;
		else
		{
			tab[word] = ft_create_word(&str[idx], sep);
			if (tab[word] == NULL)
			{
				ft_free_tab(tab, word);
				return (0);
			}
			idx += ft_strlen(tab[word]);
			word++;
		}
	}
	tab[word] = NULL;
	return (1);
}

char	**ft_split(char const *str, char sep)
{
	char	**tab;

	if (str == NULL)
		return (NULL);
	tab = malloc((ft_count_word(str, sep) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	if (!ft_fill_tab(tab, str, sep))
		return (NULL);
	return (tab);
}
