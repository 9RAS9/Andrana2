/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafanom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:00:31 by arafanom          #+#    #+#             */
/*   Updated: 2024/10/21 17:59:18 by arafanom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	o;

	o = 0;
	while (str[o] != '\0')
	{
		o++;
	}
	return (o);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*allow;
	int		i;
	int		j;
	int		leng;

	leng = 0;
	allow = malloc(sizeof(char) * (ft_len(sep) * (size) * 1024));
	i = 0;
	leng = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			allow[leng++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			allow[leng++] = sep[j++];
		}
		i++;
	}
	allow[leng] = '\0';
	return (allow);
}
/*int main(int argc, char *argv[])
{
	char sepa[] = " AINSI VA LA VIE MON FRere ";
	printf("%s", ft_strjoin(argc - 1, &argv[1] , sepa));
	return (0);
}*/
