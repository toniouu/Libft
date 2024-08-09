/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:09:40 by atovoman          #+#    #+#             */
/*   Updated: 2024/02/25 10:26:43 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	t_dest;
	size_t	t_src;
	size_t	i;
	size_t	j;

	t_dest = ft_strlen(dest);
	t_src = ft_strlen(src);
	i = 0;
	j = 0;
	while (j < size && dest[j] != '\0')
		j++;
	if (j >= size)
		return (size + t_src);
	else if (j < size)
	{
		while (src[i] != '\0' && j + 1 < size)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
	}
	dest[j] = '\0';
	return (t_dest + t_src);
}
