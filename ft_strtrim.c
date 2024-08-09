/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:24:54 by atovoman          #+#    #+#             */
/*   Updated: 2024/02/25 10:37:23 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	j;

	if (s1 == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != 0)
	{
		i++;
	}
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]) != 0)
	{
		j--;
	}
	dest = malloc(sizeof(char) * (j - i + 1));
	if (!dest)
		return (0);
	ft_strlcpy(dest, s1 + i, (j - i + 1));
	return (dest);
}
