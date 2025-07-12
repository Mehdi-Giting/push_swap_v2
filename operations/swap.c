/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:43:20 by marvin            #+#    #+#             */
/*   Updated: 2025/07/03 15:43:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_top(t_node **head)
{
	t_node	*node_a;
	t_node	*node_b;
	int		node_index;
	int		node_value;

	if (!*head || !(*head)->next)
		return ;
	node_a = *head;
	node_b = (*head)->next;
	node_index = node_a->index;
	node_value = node_a->value;
	node_a->index = node_b->index;
	node_a->value = node_b->value;
	node_b->index = node_index;
	node_b->value = node_value;
}

void	sa(t_node **a)
{
	swap_top(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	swap_top(b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	swap_top(a);
	swap_top(b);
	write(1, "ss\n", 3);
}
