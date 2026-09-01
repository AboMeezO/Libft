/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 22:30:32 by username          #+#    #+#             */
/*   Updated: 2026/09/01 22:30:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				index;

	str = (const unsigned char *) s;
	index = 0;
	while (index < n)
	{
		if (str[index] == (unsigned char) c)
			return ((void *) & str[index]);
		index++;
	}
	return (NULL);
}
