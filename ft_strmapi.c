/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammad.mahmoud@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:05:55 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/03 20:05:55 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		index;

	index = 0;
	while (s[index])
		index++;
	res = malloc(sizeof(char) * (index + 1));
	if (!res)
		return (NULL);
	index = 0;
	while (s[index])
	{
		res[index] = f(index, s[index]);
		index++;
	}
	res[index] = '\0';
	return (res);
}

/*
char to_upper(unsigned int n, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

#include <stdio.h>
int main (int ac, char **av)
{
	if (ac < 2)
	{
		printf("u fucking nigger u need one arg at lease!!!");
		return (0);
	}
	char *res = ft_strmapi(av[1], to_upper);
	printf("%s", res);
}
*/