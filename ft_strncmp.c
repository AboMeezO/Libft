/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:23:38 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/07 13:25:21 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n && s1[index] && s1[index] == s2[index])
		index++;
	if (index == n || s1[index] == s2[index])
		return (0);
	if (s1[index] > s2[index])
		return (1);
	return (-1);
}
