/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammad.mahmoud@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:23:02 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/01 23:23:02 by mohammah         ###   ########.fr       */
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
