/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammad.mahmoud@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:23:53 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/01 23:23:53 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	index;

	if ((len - start) <= 0)
		return (NULL);
	sub = malloc(sizeof(char) * (len - start));
	if (!sub)
		return (NULL);
	index = 0;
	while (start <= len)
	{
		sub[index] = s[start];
		start++;
		index++;
	}
	sub[start] = '\0';
	return (sub);
}
