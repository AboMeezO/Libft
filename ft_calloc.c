/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammad.mahmoud@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:21:55 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/01 23:21:55 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	size_t	index;
	void	*ptr;
	size_t	total_size;

	if (n != 0 && size > (size_t) - 1 / n)
		return (NULL);
	total_size = n * size;
	ptr = malloc(total_size);
	index = 0;
	if (ptr)
	{
		while (index < total_size)
		{
			((char *) ptr)[index] = 0;
			index++;
		}
	}
	return (ptr);
}
