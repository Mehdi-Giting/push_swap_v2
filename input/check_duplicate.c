/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 00:11:36 by marvin            #+#    #+#             */
/*   Updated: 2025/07/10 00:11:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	handle_double_arg(char *av)
{
	char	**dest;
	int		i;
	int		j;

	i = 0;
	dest = ft_split(av);
	if (!dest)
		return (0);
	while (dest[i])
	{
		j = i + 1;
		while (dest[j])
		{
			if (ft_atol(dest[i]) == ft_atol(dest[j]))
			{
				free_split(dest);
				return (0);
			}
			j++;
		}
		i++;
	}
	free_split(dest);
	return (1);
}

int handle_plus_args(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atol(av[i]) == ft_atol(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_duplicate(int ac, char **av)
{
	int		res;
	
	if (ac == 2)
		res = handle_double_arg(av[1]);
	else
		res = handle_plus_args(av + 1);
	return (res);
}