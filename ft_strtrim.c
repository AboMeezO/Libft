/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammad.mahmoud@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 01:24:15 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/02 01:24:44 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static int	is_in_set(char c, char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

static int	get_start(char const *s1, char const *set)
{
	int	index;

	index = 0;
	while (s1[index] && is_in_set(s1[index], set))
		index++;
	return (index);
}

static int	get_end(char const *s1, char const *set)
{
	int	index;

	index = 0;
	while (s1[index])
		index++;
	index--;
	while (index >= 0 && is_in_set(s1[index], set))
		index--;
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		index;

	start = get_start(s1, set);
	end = get_end(s1, set);
	if (end < start)
		end = start - 1;
	res = malloc(sizeof(char) * (end - start + 2));
	if (!res)
		return (NULL);
	index = 0;
	while (start <= end)
	{
		res[index] = s1[start];
		index++;
		start++;
	}
	res[index] = '\0';
	return (res);
}
