/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:23:06 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/07 13:24:50 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*d;
	const unsigned char	*s;

	index = 0;
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return (dest);
}
