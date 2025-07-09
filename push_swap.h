/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:18:18 by marvin            #+#    #+#             */
/*   Updated: 2025/07/09 12:18:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int				value;
	int				index;
	int				push_cost;
	int				above_median;
	int				cheaped;
	struct s_node	*next;
	struct s_node	*prev;
} t_node;

int		check_param(int ac, char **av);
int		is_valid_num(int ac, char **av);
int		is_valid_int(int ac, char **av);
int		check_duplicate(int ac, char **av);
int 	cd_plus_arg(char **av);
int		cd_two_arg(char *av);
int		ft_count_len(char *s);
int		count_word(char *s);
int		fill_dest(char *dest, char *s);
void	free_dest(char **dest);
char	**ft_split(char *s);
void	pb(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_b, t_node **stack_a);
void	reverse_rotate(t_node **head);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	rotate(t_node **head);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	swap_top(t_node **head);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
int		list_size(t_node **head);
t_node	*get_last_node(t_node **head);
t_node	*get_before_last_node(t_node **head);
int		is_sorted(t_node **head);
void	print_list(t_node **head);
long	ft_atol(char *s);
void	add_back(t_node **head, t_node *new_node);
void	add_front(t_node **head, t_node *new_node);
void	sort_three(t_node **a);
int		len_array(char **av);
t_node	*create_node(int value);
t_node	*init_stack_a(char **av);
void 	free_stack(t_node *stack);

#endif
