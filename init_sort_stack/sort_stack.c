/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 23:45:00 by marvin            #+#    #+#             */
/*   Updated: 2025/07/11 23:45:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	array_to_stack(t_node **a)
{
	int	*arr;

	arr = stack_to_array(*a, list_size(a));
	sort_array(arr, list_size(a));
	assign_index(a, arr, list_size(a));
	free(arr);
}

int	biggest_index_in_stack(t_node *a)
{
	int		max;
	t_node	*tmp_node;

	max = 0;
	tmp_node = a;
	while (tmp_node)
	{
		if (max < tmp_node->index)
			max = tmp_node->index;
		tmp_node = tmp_node->next;
	}
	return (max);
}

int	get_max_bits(int max)
{
	int bits = 0;
	while((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_node **a, t_node **b)
{
	int		max_bits;
	int		i;
	int		j;
	int		size;

	array_to_stack(a);
	max_bits = get_max_bits(biggest_index_in_stack(*a));
	i = 0;
	size = list_size(a);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(b, a);
		i++;
	}
}
