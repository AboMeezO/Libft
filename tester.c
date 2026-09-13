/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 12:01:36 by mohammah          #+#    #+#             */
/*   Updated: 2026/09/13 12:06:04 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "./tester/tester.h"

int main (int ac, char **av)
{
	if (ac < 2)
	{
		printf("you should metion atleast one libtf function \nusage: ./a.out <function name> \nexample: ./a.out ft_strnstr");
		return 0;
	}
	test_hander(ac, av);
	return 0;
}
