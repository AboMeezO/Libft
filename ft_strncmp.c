/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammad.mahmoud@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:23:38 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/01 23:23:38 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	index;

	index = 0;
	while (index < n && s1[index] && s1[index] == s2[index])
		index++;
	if (index == n || s1[index] == s2[index])
		return (0);
	if (s1[index] > s2[index])
		return (1);
	return (-1);
}
