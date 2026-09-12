/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 14:54:05 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/12 14:15:50 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (NULL);
	new->next = *lst;
	*lst = new;
}
