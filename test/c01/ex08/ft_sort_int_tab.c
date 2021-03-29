/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:33:57 by tconte            #+#    #+#             */
/*   Updated: 2021/03/18 11:02:50 by tconte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int temp;
    
    temp = 0;
    temp = *b;
    *b = *a;
    *a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
    int compt;

    size = size - 1;
    compt = 0;
    while (compt < size)
    {
		if (tab[compt] > tab[compt + 1])
			ft_swap(&tab[compt], &tab[compt + 1]);
        else  
        {
			int a;

			a = compt;
			while (tab[compt - 1] > tab[compt])
          	{
            	ft_swap(&tab[compt], &tab[compt - 1]);
            	compt--;
          	}
          	compt = a;
          	compt++;
        }	    
    }
}
