/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafanom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:45:32 by arafanom          #+#    #+#             */
/*   Updated: 2024/10/17 10:23:07 by arafanom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>    
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tp;

	tp = *a;
	*a = *b;
	*b = tp;
}

void	ft_print_params(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;
	int	k;
	int	l;

	j = 1;
	while (j < argc)
	{
		l = j;
		while (l < argc)
		{
			k = ft_strcmp(argv[j], argv[l]);
			if (k > 0)
				ft_swap(&argv[j], &argv[l]);
			l++;
		}
		j++;
	}
	ft_print_params(argv);
	return (0);
}
