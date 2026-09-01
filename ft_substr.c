/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/01 22:27:03 by username         #+#    #+#              */
/*   Updated: 2026/09/01 22:29:10 by username        ###   ########.fr        */
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
