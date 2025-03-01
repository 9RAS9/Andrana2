/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafanom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:36:09 by arafanom          #+#    #+#             */
/*   Updated: 2024/10/17 13:04:23 by arafanom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	int	div;
	int	count;

	div = 1;
	count = 0;
	while (div <= n)
	{
		if (n % div == 0)
			count++;
		div++;
	}
	if (count == 2)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	val;

	val = 1;
	while (val)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
