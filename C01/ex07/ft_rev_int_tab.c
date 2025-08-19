/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:53:51 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/24 22:39:45 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	last_c;
	int	first_c;

	last_c = size - 1;
	first_c = 0;
	while (first_c < size / 2)
	{
		temp = tab[last_c];
		tab[last_c] = tab[first_c];
		tab[first_c] = temp;
		last_c--;
		first_c++;
	}
}

// int	main(void)
// {
// 	int	tab[] = {100, 2, 3, 4, 5};

// 	ft_rev_int_tab(tab, 5);
// 	return (0);
// }
