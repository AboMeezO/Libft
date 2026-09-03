/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammad.mahmoud@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 01:21:40 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/04 01:21:40 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int		index;

	index = 0;
	while (s[index])
	{
		write(fd, s[index], 1);
		index++;
	}
}
