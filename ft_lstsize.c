/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 20:06:20 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/14 08:33:04 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	index;
	t_list			*current;

	index = 0;
	current = lst;
	while (current != NULL)
	{
		current = current->next;
		index++;
	}
	return (index);
}
