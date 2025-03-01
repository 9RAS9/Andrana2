/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafanom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:27:19 by arafanom          #+#    #+#             */
/*   Updated: 2024/10/13 16:57:47 by arafanom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (*to_find == '\0')
		return (str);
	while (str[x] != '\0')
	{
		while ((str[x + y] == to_find[y]) && (str[x + y] != '\0'))
			y++;
		if (to_find[y] == '\0')
			return (str + x);
		x++;
		y = 0;
	}
	return (0);
}
