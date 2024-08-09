/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:51:47 by atovoman          #+#    #+#             */
/*   Updated: 2024/02/25 10:25:24 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;
	size_t	t_size;

	t_size = nmemb * size;
	s = malloc(t_size);
	if (!s)
		return (0);
	ft_bzero(s, t_size);
	return (s);
}
