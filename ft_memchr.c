/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammad.mahmoud@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:22:58 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/01 23:22:58 by mohammah         ###   ########.fr       */
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
