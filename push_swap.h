/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 00:59:13 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 00:59:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

int		check_arguments(int ac, char **av);
int		is_valid_num(int ac, char **av);
int		is_valid_int(int ac, char **av);
int		check_duplicate(int ac, char **av);

t_node	*init_stack(char **av);
t_node	*create_node(int value);
void	add_back(t_node **head, t_node *new_node);
void	assign_indices(t_node **a);
int		*stack_to_array(t_node *a, int size);
void	sort_array(int *arr, int size);
void	set_index_from_array(t_node **a, int *arr, int size);

void	sort_three(t_node **a);
void	sort_five(t_node **a, t_node **b);
void	radix_sort(t_node **a, t_node **b);
int		biggest_index_in_stack(t_node *a);
int		get_max_bits(int max);

void	pa(t_node **b, t_node **a);
void	pb(t_node **a, t_node **b);

void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	swap_top(t_node **head);

void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rotate(t_node **head);

void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	reverse_rotate(t_node **head);

char	**ft_split(char *s);
int		ft_count_len(char *s);
int		count_word(char *s);
int		fill_dest(char *dest, char *s);
void	free_split(char **dest);
long	ft_atol(char *s);
int		find_max_index(t_node *b);
int		position_of_index(t_node *b, int index);
void	rotate_b_to_top(t_node **b, int index);
void	push_back_biggest(t_node **b, t_node **a);
int		exists_in_chunk(t_node *a, int lower, int upper);
void	rotate_a_to_top(t_node **a, int index);
int		find_next_member_chunk_in_a(t_node *a, int lower, int upper);
int		min_index(t_node *a);
void	push_one_chunk(t_node **a, t_node **b, int lower, int upper);
void	chunk_sort(t_node **a, t_node **b);

void	add_front(t_node **head, t_node *new_node);
t_node	*get_last_node(t_node **head);
t_node	*get_before_last_node(t_node **head);
int		list_size(t_node **head);
int		is_sorted(t_node **head);
void	print_stack(t_node **head);
void	free_stack(t_node *stack);

#endif