/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:23:14 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/08 00:29:07 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			index;

	p = (unsigned char *) s;
	index = 0;
	while (index < n)
	{
		p[index] = (unsigned char) c;
		index++;
	}
	return (s);
}
