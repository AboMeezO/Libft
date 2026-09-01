/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 22:30:25 by username          #+#    #+#             */
/*   Updated: 2026/09/01 22:30:25 by marvin           ###   ########.fr       */
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
