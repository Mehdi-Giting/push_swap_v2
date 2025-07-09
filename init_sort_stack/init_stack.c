/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 21:42:08 by marvin            #+#    #+#             */
/*   Updated: 2025/07/09 21:42:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	len_array(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

t_node	*init_stack_a(char **av)
{
	t_node	*head;
	t_node	*new_node;
	int		i;

	i = 0;
	head = create_node(ft_atol(av[i]));
	i++;
	while (i < len_array(av))
	{
		new_node = create_node(ft_atol(av[i]));
		add_back(&head, new_node);
		i++;
	}
	return (head);
}