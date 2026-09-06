/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 12:52:37 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/06 14:56:19 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stddef.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*res;
	int		index;
	char	*temp;
	char	*res_content;

	res = (t_list *)malloc(sizeof(t_list));
	temp = (char *)content;
	index = 0;
	while (temp[index])
		index++;
	res_content = malloc(sizeof(char) * (index + 1));
	if (!res_content || !res)
	{
		free(res);
		return (NULL);
	}
	index = 0;
	while (temp[index])
	{
		res_content[index] = temp[index];
		index++;
	}
	res_content[index] = '\0';
	*res = (t_list){res_content, NULL};
	return (res);
}
