/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafanom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:19:35 by arafanom          #+#    #+#             */
/*   Updated: 2024/10/10 16:53:48 by arafanom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	j;

	j = 0;
	size = ft_strlen(dest);
	while ((src[j] != '\0') && j < nb)
	{
		dest[size + j] = src[j];
		j++;
	}
	dest[size + j] = '\0';
	return (dest);
}
