/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:04:59 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 18:04:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max_index(t_node *b)
{
	t_node	*tmp_node;
	int		max_index;

	tmp_node = b;
	max_index = 0;
	while (tmp_node)
	{
		if (tmp_node->index > max_index)
			max_index = tmp_node->index;
		tmp_node = tmp_node->next;
	}
	return (max_index);
}

int	position_of_index(t_node *b, int index)
{
	int		i;
	t_node	*tmp_node;

	i = 0;
	tmp_node = b;
	while (tmp_node && tmp_node->index != index)
	{
		tmp_node = tmp_node->next;
		i++;
	}
	if (tmp_node == NULL)
		return (-1);
	return (i);
}

void	rotate_b_to_top(t_node **b, int index)
{
	if (position_of_index((*b), index) < (list_size(b) / 2))
	{
		while ((*b)->index != index)
			rb(b);
	}
	else
		while ((*b)->index != index)
			rrb(b);
}

void	push_back_biggest(t_node **b, t_node **a)
{
	int	max_index;

	while (*b)
	{
		max_index = find_max_index(*b);
		rotate_b_to_top(b, max_index);
		pa(b, a);
	}
}
