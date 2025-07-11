/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 22:12:05 by marvin            #+#    #+#             */
/*   Updated: 2025/07/11 22:12:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*stack_to_array(t_node *a, int size)
{
	t_node	*tmp_node;
	int		*arr;
	int		i;

	tmp_node = a;
	i = 0;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (tmp_node)
	{
		arr[i] = tmp_node->value;
		tmp_node = tmp_node->next;
		i++;
	}
	return (arr);
}

void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	assign_index(t_node **a, int *arr, int size)
{
	t_node	*tmp_node;
	int		i;

	tmp_node = *a;
	while (tmp_node)
	{
		i = 0;
		while(i < size)
		{
			if (arr[i] == tmp_node->value)
			{
				tmp_node->index = i;
				break ;
			}
			i++;
		}
		tmp_node = tmp_node->next;
	}
}