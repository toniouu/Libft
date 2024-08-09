/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:51:43 by atovoman          #+#    #+#             */
/*   Updated: 2024/02/25 10:26:07 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const char *src, size_t size)
{
	char		*t_dest;

	if (!dest && !src)
		return (0);
	t_dest = (char *)dest;
	if (t_dest <= src || t_dest >= (src + size))
	{
		while (size != 0)
		{
			*t_dest = *src;
			size--;
			t_dest++;
			src++;
		}
	}
	else
	{
		t_dest += size - 1;
		src += size - 1;
		while (size--)
			*t_dest-- = *src--;
	}
	return (dest);
}
