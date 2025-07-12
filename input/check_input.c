/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:43:01 by marvin            #+#    #+#             */
/*   Updated: 2025/07/09 14:43:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_arguments(int ac, char **av)
{
	if (is_valid_num(ac, av) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (is_valid_int(ac, av) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (check_duplicate(ac, av) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	is_valid_num_belly(char **av, int ac)
{
	int	i;
	int	j;

	i = 0;
	if (ac > 2)
		i++;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '-' && av[i][j + 1] >= '0' && av[i][j + 1] <= '9')
		{
			j++;
		}
		while (av[i][j] >= '0' && av[i][j] <= '9')
			j++;
		if (av[i][j] != '\0')
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_num(int ac, char **av)
{
	if (ac == 2)
		av = ft_split(av[1]);
	if (is_valid_num_belly(av, ac) == 0)
	{
		if (ac == 2)
			free_split(av);
		return (0);
	}
	if (ac == 2)
		free_split(av);
	return (1);
}

int	is_valid_int(int ac, char **av)
{
	int		i;
	long	val;

	i = 1;
	if (ac == 2)
	{
		av = ft_split(av[1]);
		i--;
	}
	while (av[i])
	{
		val = ft_atol(av[i]);
		if (!(val <= 2147483647 && val >= -2147483648))
		{	
			if (ac == 2)
				free_split(av);
			return (0);
		}
		i++;
	}
	if (ac == 2)
		free_split(av);
	return (1);
}
