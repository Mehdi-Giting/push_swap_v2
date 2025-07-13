/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_&_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 22:03:46 by marvin            #+#    #+#             */
/*   Updated: 2025/07/09 22:03:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_node **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

int	min_index(t_node *a)
{
	t_node	*tmp;
	int		min;
	int		pos;
	int		i;

	tmp = a;
	min = tmp->index;
	pos = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->index < min)
		{
			min = tmp->index;
			pos = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

void	sort_five(t_node **a, t_node **b)
{
	int	pos;

	assign_indices(a);
	while (list_size(a) > 3)
	{
		pos = min_index(*a);
		if (pos == 0)
			pb(a, b);
		else if (pos <= list_size(a) / 2)
			while (pos-- > 0)
				ra(a);
		else
			while (pos++ < list_size(a))
				rra(a);
	}
	sort_three(a);
	if (list_size(b) == 2 && (*b)->index < (*b)->next->index)
		sb(b);
	if (list_size(b) == 2)
	{
		pa(b, a);
		pa(b, a);
	}
	else
		pa(b, a);
}
