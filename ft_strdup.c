/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:23:21 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/07 13:27:11 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		index;
	char	*dup;

	if (!s)
		return (NULL);
	index = 0;
	while (s[index])
		index++;
	dup = (char *) malloc(sizeof(char) * (index + 1));
	if (dup == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		dup[index] = s[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}
