/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:36:58 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 18:36:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	exists_in_chunk(t_node *a, int lower, int upper)
{
	t_node	*tmp_node;

	tmp_node = a;
	while (tmp_node)
	{
		if (tmp_node->index >= lower && tmp_node->index < upper)
			return (1);
		tmp_node = tmp_node->next;
	}
	return (0);
}

void	rotate_a_to_top(t_node **a, int index)
{
	if (position_of_index((*a), index) < (list_size(a) / 2))
	{
		while ((*a)->index != index)
			ra(a);
	}
	else
		while ((*a)->index != index)
			rra(a);
}

int	find_next_member_chunk_in_a(t_node *a, int lower, int upper)
{
	t_node	*tmp_node;

	tmp_node = a;
	while (tmp_node)
	{
		if (tmp_node->index >= lower && tmp_node->index < upper)
			return (tmp_node->index);
		tmp_node = tmp_node->next;
	}
	return (-1);
}

void	push_one_chunk(t_node **a, t_node **b, int lower, int upper)
{
	int	next_in_chunk_a;

	while (exists_in_chunk(*a, lower, upper))
	{
		next_in_chunk_a = find_next_member_chunk_in_a(*a, lower, upper);
		rotate_a_to_top(a, next_in_chunk_a);
		if (next_in_chunk_a < ((lower + upper) / 2))
		{
			pb(a, b);
			rb(b);
		}
		else
			pb(a, b);
	}
}

void	chunk_sort(t_node **a, t_node **b)
{
	int	size;
	int	chunk_size;
	int	lower;
	int	max_idx;

	size = list_size(a);
	assign_indices(a);
	max_idx = find_max_index(*a);
	if (size <= 100)
		chunk_size = 25;
	else
		chunk_size = 50;
	lower = 0;
	while (lower <= max_idx)
	{
		push_one_chunk(a, b, lower, lower + chunk_size);
		lower = lower + chunk_size;
	}
	push_back_biggest(b, a);
}