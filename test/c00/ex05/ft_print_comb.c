/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:10:14 by tconte            #+#    #+#             */
/*   Updated: 2021/03/16 09:10:16 by tconte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char t[5];

	*t = '0';
	t[1] = '1';
	t[2] = '2';
	t[3] = ',';
	t[4] = ' ';
	while (*t < '8')
	{
		write(1, t, (*t != '7') ? 5 : 3);
		if (++t[2] > '9')
		{
			if (++t[1] > '8')
				t[1] = ++(*t) + 1;
			t[2] = t[1] + 1;
		}
	}
}
