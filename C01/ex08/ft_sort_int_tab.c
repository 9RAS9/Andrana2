/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafanom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:22:07 by arafanom          #+#    #+#             */
/*   Updated: 2024/10/08 17:55:12 by arafanom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	p;
	int	q;
	int	l;
	int	tp;

	p = 0;
	while (p < size)
	{
		q = p + 1;
		while (q < size)
		{
			l = tab[p] - tab[q];
			if (l >= 0)
			{
				tp = tab[p];
				tab[p] = tab[q];
				tab[q] = tp;
			}
			q++;
		}
		p++;
	}
}
