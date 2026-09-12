/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 20:39:26 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/12 14:20:20 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst)
		return (NULL);
	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
