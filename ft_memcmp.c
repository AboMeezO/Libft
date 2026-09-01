/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 22:30:33 by username          #+#    #+#             */
/*   Updated: 2026/09/01 22:30:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				index;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	index = 0;
	while (index < n && str1[index] == str2[index])
		index++;
	if (index == n)
		return (0);
	if (str1[index] > str2[index])
		return (1);
	return (-1);
}
