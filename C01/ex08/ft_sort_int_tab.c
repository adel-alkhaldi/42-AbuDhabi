/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:40:53 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/25 22:31:38 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{

	int minimum = tab[0];
	int i = 1; 
	int c = 1;
	int temp;
	while (c < size)
	{
		i = 0;
		while (i < size) 
		{
			if(tab[i] < minimum)
				minimum = tab[i];
			i++;
		}
		
	}
}