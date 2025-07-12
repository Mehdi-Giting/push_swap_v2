/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:42:52 by marvin            #+#    #+#             */
/*   Updated: 2025/07/03 15:42:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp_node;

	tmp_node = (*stack_a);
	if (!*stack_a)
		return ;
	(*stack_a) = (*stack_a)->next;
	tmp_node->next = NULL;
	add_front(stack_b, tmp_node);
	write(1, "pb\n", 3);
}

void	pa(t_node **stack_b, t_node **stack_a)
{
	t_node	*tmp_node;

	tmp_node = (*stack_b);
	if (!*stack_b)
		return ;
	(*stack_b) = (*stack_b)->next;
	tmp_node->next = NULL;
	add_front(stack_a, tmp_node);
	write(1, "pa\n", 3);
}
