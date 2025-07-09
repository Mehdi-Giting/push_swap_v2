/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:35:53 by marvin            #+#    #+#             */
/*   Updated: 2025/07/09 12:35:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_node **a, t_node **b)
{
	(void)b;
	if (list_size(a) == 2)
		sa(a);
	else if (list_size(a) == 3)
		sort_three(a);
	// else
	// 	sort_list(a, b)
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (ac < 2 || !av[1][0])
		return (1);
	else if (check_param(ac, av) == 0)
		return (1);
	if (ac == 2)
	{
		av = ft_split(av[1]);
		a = init_stack_a(av);
	}
	else
		a = init_stack_a(av + 1);
	if (is_sorted(&a) == 0)
		sort_stack(&a, &b);
	print_list(&a);
	if (ac == 2)
		free_dest(av);
	free_stack(a);
	return (0);
}
