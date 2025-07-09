/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:59:33 by marvin            #+#    #+#             */
/*   Updated: 2025/07/09 13:59:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_back(t_node **head, t_node *new_node)
{
	t_node *tmp_node;

	tmp_node = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		tmp_node->next = new_node;
	}
}

void	add_front(t_node **head, t_node *new_node)
{
	t_node *tmp_node;

	tmp_node = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = tmp_node;
		*head = new_node;
	}
}
