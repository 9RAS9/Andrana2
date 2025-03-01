/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafanom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:04:34 by arafanom          #+#    #+#             */
/*   Updated: 2024/10/04 22:48:51 by arafanom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	chain(int n1, int n2, char *prime)
{
	*prime = n1 / 10 + '0';
	*(prime + 1) = n1 % 10 + '0';
	*(prime + 2) = ' ';
	*(prime + 3) = n2 / 10 + '0';
	*(prime + 4) = n2 % 10 + '0';
}

void	ft_print_comb2(void)
{
	int		prefix;
	int		suffix;
	char	train[5];

	prefix = 0;
	while (prefix <= 98)
	{
		suffix = prefix + 1;
		while (suffix <= 99)
		{
			chain(prefix, suffix, train);
			write(1, train, 5);
			if (prefix != 98)
				write(1, ", ", 2);
			suffix++;
		}
		prefix++;
	}
}
