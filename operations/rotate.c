/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:43:10 by marvin            #+#    #+#             */
/*   Updated: 2025/07/03 15:43:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_node **head)
{
	t_node	*tmp_node;
	t_node	*last_node;

	if (!(*head) || !(*head)->next)
		return ;
	tmp_node = *head;
	last_node = get_last_node(head);
	*head = (*head)->next;
	last_node->next = tmp_node;
	tmp_node->next = NULL;
}

void	ra(t_node **a)
{
	rotate(a);
	write(1, "ra\n", 3);

}

void	rb(t_node **b)
{
	rotate(b);
	write(1, "rb\n", 3);

}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);

}