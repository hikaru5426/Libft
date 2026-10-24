/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolinie <tmolinie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:40:57 by tmolinie          #+#    #+#             */
/*   Updated: 2026/10/23 18:50:06 by tmolinie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_ascii(char *str, int len)
{
	int	idx = 0;
	while (idx < len)
	{
		printf("%d ", str[idx]);
		idx++;
	}
	printf("\n");
}

int	main(void)
{
	printf("strlen : %lu\n", ft_strlen("This is a sentence"));

	char	str_memset[] = "This is a sentence";
	size_t	count_memset = 3;
	printf("my memset : %s\n", (char *)ft_memset(str_memset, 'g', count_memset));
	printf("original memset : %s\n", (char *)memset(str_memset, 'g', count_memset));

	char	str_bzero[] = "This is a sentence";
	size_t	count_bzero = 3;
	int		len_bzero = ft_strlen(str_bzero);
	ft_bzero(str_bzero, count_bzero);
	ft_print_ascii(str_bzero, len_bzero);

	char	str_memcpy[] = "This is a sentence";
	char	str_memcpy2[] = "This is a sentence";
	char	src_memcpy[] = "Thiii";
	int		count_memcpy = 25;
	printf("my memcpy : %s\n", (char *)ft_memcpy(str_memcpy, src_memcpy, count_memcpy));
	printf("original memcpy : %s\n", (char *)memcpy(str_memcpy2, src_memcpy, count_memcpy));

	char	dest_memmove[20] = "This is";
	char	dest_memmove2[20] = "This is";
	char	src_memmove[] = "a sentence";
	char	src_memmove2[] = "a sentence";
	printf("my memmove : %s\n", (char *)ft_memmove(dest_memmove, src_memmove, 15));
	printf("original memmove : %s\n", (char *)memmove(dest_memmove2, src_memmove2, 15));

	char	dest_strlcpy[10]; memset(dest_strlcpy, 'A', 10);
	char	dest_strlcpy2[10]; memset(dest_strlcpy2, 'A', 10);
	char	src_strlcpy[] = "coucou";
	int		count_strlcpy = -1;
	printf("my strlcpy : %d, %s\n", (int)ft_strlcpy(dest_strlcpy, src_strlcpy, count_strlcpy), dest_strlcpy);
	printf("original strlcpy : %d, %s\n", (int)strlcpy(dest_strlcpy2, src_strlcpy, count_strlcpy), dest_strlcpy2);

	char	dest_strlcat[20] = "abcd";
	char	src_strlcat[] = "attention";
	size_t	count_strlcat= -1;
	char	dest_strlcat2[20] = "abcd";
	printf("\n\nmy strlcat : %d, %s\n", (int)ft_strlcat(dest_strlcat, src_strlcat, count_strlcat), dest_strlcat);
	printf("original strlcat : %d, %s\n", (int)strlcat(dest_strlcat2, src_strlcat, count_strlcat), dest_strlcat2);

	char str_toupper = 's';
	printf("toupper : %c\n", ft_toupper(str_toupper));
	char str_tolower = 'B';
	printf("tolower : %c\n", ft_tolower(str_tolower));

	char	str_strchr[] = "Sentence";
	int		to_find_strchr = 'e';
	printf("my strchr : %s\n", ft_strchr(str_strchr, to_find_strchr));
	printf("original strchr : %s\n", strchr(str_strchr, to_find_strchr));

	char	str_strrchr[] = "Sentence";
	int		to_find_strrchr = 'n';
	printf("my strrchr : %s\n", ft_strrchr(str_strrchr, to_find_strrchr));
	printf("original strrchr : %s\n", strrchr(str_strrchr, to_find_strrchr));

	char	str_stncmp[] = "Sentence";
	char	str_stncmp2[] = "SenteNce";
	int		int_strncmp = 5;
	printf("my strncmp : %d\n", ft_strncmp(str_stncmp, str_stncmp2, int_strncmp));
	printf("original strncmp : %d\n", strncmp(str_stncmp, str_stncmp2, int_strncmp));

	char	*str_memchr = "Sentence";
	int		ch_memchr = 256 + 'e';
	size_t	count_memchr = 5;
	printf("my memchr : %s\n", (char *)ft_memchr(str_memchr, ch_memchr, count_memchr));
	printf("original memchr : %s\n\n", (char *)memchr(str_memchr, ch_memchr, count_memchr));

	char	*str_memcmp = "Sentence";
	char	*str_memcmp2 = "SentEnce";
	size_t	count_memcmp = 20;
	printf("my memcmp : %d\n", ft_memcmp(str_memcmp, str_memcmp2, count_memcmp));
	printf("original memcmp : %d\n", memcmp(str_memcmp, str_memcmp2, count_memcmp));

	const char	*str_strnstr = "aaabcabcd";
	const char	*sub_str_strnstr = "cd";
	size_t	len_strnstr = 8;
	printf("my strnstr : %s\n", ft_strnstr(str_strnstr, sub_str_strnstr, len_strnstr));
	printf("original strnstr : %s\n", strnstr(str_strnstr, sub_str_strnstr, len_strnstr));

	const char	*str_atoi = "   +0548 9";
	printf("My atoi : %d\n", ft_atoi(str_atoi));
	printf("original atoi : %d\n", atoi(str_atoi));

	size_t	num_calloc = 4;
	size_t	size_calloc = 4;
	void *	my_calloc = ft_calloc(num_calloc, size_calloc);
	void *	original_calloc = calloc(num_calloc, size_calloc);
	printf("My calloc : ");
	ft_print_ascii((char *)my_calloc, num_calloc * size_calloc);
	free(my_calloc);
	printf("Original calloc : ");
	ft_print_ascii((char *)original_calloc, num_calloc * size_calloc);
	free(original_calloc);

	const char	*str_strdup = "Sentence";
	char		*result_strdup = ft_strdup(str_strdup);
	char		*result_strdup2 = strdup(str_strdup);
	printf("my strdup : %s\n", result_strdup);
	free(result_strdup);
	printf("original strdup : %s\n", result_strdup2);
	free(result_strdup2);

	const char		*str_substr = "0123456789";
	unsigned int	start_substr = 4294967295;
	size_t			len_substr = 5;
	char			*substr_substr = ft_substr(str_substr, start_substr, len_substr);
	printf("my substr : %s\n", substr_substr);
	free(substr_substr);

	const char	*str_strjoin = "petit poneyyyyyyyy";
	const char	*str2_strjoin = "pas petit poneyyyyyyyy";
	const char	*res_strjoin = ft_strjoin(str_strjoin, str2_strjoin);
	printf("my strjoin : %s\n", res_strjoin);
	free((void *)res_strjoin);

	const char	*str_strtrim = "dogherephoqueherecerfhereherehereapparthere";
	char		*sep_strtrim = "here";
	char		*str_trimmed_strtrim = ft_strtrim(str_strtrim, sep_strtrim);
	printf("my strtrim : %s\n", str_trimmed_strtrim);
	free(str_trimmed_strtrim);

	const char	*str_split = "salade||||tomate|phoque|maison||||";
	char		sep_split = '|';
	char		**tab_split = ft_split(str_split, sep_split);
	size_t		idx = 0;
	while (tab_split[idx])
	{
		printf("tab[%zu] : %s\n", idx, tab_split[idx]);
		free(tab_split[idx]);
		idx++;
	}
	free(tab_split);
}