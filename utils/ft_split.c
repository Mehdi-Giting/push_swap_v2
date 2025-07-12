/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:55:01 by marvin            #+#    #+#             */
/*   Updated: 2025/07/09 12:55:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_count_len(char *s)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != ' ')
		len++;
	return (len);
}
int	count_word(char *s)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		if (s[i] != ' ' && s[i] != '\0')
		{
			while (s[i] != ' ' && s[i] != '\0')
				i++;
			word++;
		}
	}
	return (word);
}

int	fill_dest(char *dest, char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != ' ')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

void	free_split(char **dest)
{
	int		i;

	i = 0;
	while (dest[i])
	{
		free(dest[i]);
		i++;
	}
	free(dest);
}

char	**ft_split(char *s)
{
	char	**dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dest = malloc(sizeof(char *) * (count_word(s) + 1));
	if (!dest)
		return (NULL);
	while (i < count_word(s))
	{
		while (s[j] == ' ')
			j++;
		dest[i] = malloc(sizeof(char) * ft_count_len(s + j) + 1);
		if (!dest[i])
		{
			free_split(dest);
			return (NULL);
		}
		j = j + fill_dest(dest[i], s + j);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
	