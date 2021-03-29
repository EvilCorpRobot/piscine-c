/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:21:17 by tconte            #+#    #+#             */
/*   Updated: 2021/03/18 09:31:14 by tconte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	a = ft_strlen(str);
	write(1, str, a);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (1)
	{
		if (str[i] == '\0')
			return (i);
		else
			i++;
	}
}
