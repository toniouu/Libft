/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:09:55 by atovoman          #+#    #+#             */
/*   Updated: 2024/02/25 10:26:15 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t size)
{
	unsigned char	*tab;
	int				i;

	tab = (unsigned char *)s;
	i = 0;
	while (size > 0)
	{
		tab[i] = c;
		i++;
		size--;
	}
	return ((void *) tab);
}
