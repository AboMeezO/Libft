/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammad.mahmoud@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:45:43 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/03 17:09:34 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static int	count_length(int number)
{
	int	count;

	count = 0;
	if (number < 0)
		count++;
	while (number)
	{
		count++;
		number /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		length;
	long	number;

	number = n;
	length = count_length(number);
	res = malloc(sizeof(char) * (length + 1));
	if (!res)
		return (NULL);
	res[length] = '\0';
	if (number < 0)
	{
		res[0] = '-';
		number = -number;
	}
	if (number == 0)
		res[0] = '0';
	while (number > 0)
	{
		length--;
		res[length] = (number % 10) + '0';
		number /= 10;
	}
	return (res);
}
