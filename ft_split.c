/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:24:22 by atovoman          #+#    #+#             */
/*   Updated: 2024/03/08 16:14:57 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_next_word_length(char const *s, char c)
{
	size_t	length;

	length = 0;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

static void	ft_free_tab(char **s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static size_t	ft_word(char const *s, char c)
{
	size_t	word;

	word = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != '\0')
			word++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	t_tab;

	t_tab = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!tab || !s)
		return (0);
	while (*s != '\0')
	{
		while (*s == c && *s)
			s++;
		if (*s != '\0')
		{
			tab[t_tab] = ft_substr(s, 0, ft_next_word_length(s, c));
			if (!(tab[t_tab++]))
			{
				ft_free_tab(tab, t_tab - 1);
				return (0);
			}
			s += ft_next_word_length(s, c);
		}
	}
	tab[t_tab] = 0;
	return (tab);
}
