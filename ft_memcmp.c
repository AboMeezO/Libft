/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:23:02 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/17 22:45:00 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
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
	return (str1[index] - str2[index]);
}
