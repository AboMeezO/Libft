/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 23:23:45 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/13 10:13:17 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	outer_index;
	size_t	inner_index;

	outer_index = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[outer_index] && outer_index < len)
	{
		inner_index = 0;
		while (big[outer_index + inner_index]
			&& little[inner_index]
			&& outer_index + inner_index < len
			&& big[outer_index + inner_index] == little[inner_index])
			inner_index++;
		if (little[inner_index] == '\0')
			return ((char *) & big[outer_index]);
		outer_index++;
	}
	return (NULL);
}
