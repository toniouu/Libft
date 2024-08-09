/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:59:07 by atovoman          #+#    #+#             */
/*   Updated: 2024/02/26 14:55:15 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*t_dest;

	t_dest = (unsigned char *)dest;
	if (!dest && !src)
		return (0);
	while (size > 0)
	{
		*t_dest = *(unsigned char *)src;
		t_dest++;
		src++;
		size--;
	}
	return ((void *)dest);
}
