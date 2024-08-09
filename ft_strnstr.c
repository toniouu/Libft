/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atovoman <atovoman@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:11:12 by atovoman          #+#    #+#             */
/*   Updated: 2024/02/26 09:25:41 by atovoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_little;

	if (*little == 0)
		return ((char *)big);
	if (*big == 0)
		return (0);
	if (len <= 0)
		return (0);
	l_little = ft_strlen(little);
	while (*big != '\0' && len >= l_little)
	{
		if (ft_strncmp((char *)big, little, l_little) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
