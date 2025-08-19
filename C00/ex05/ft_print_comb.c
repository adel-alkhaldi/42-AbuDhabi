/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 01:25:58 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/22 21:37:24 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0';
	while (one <= '7')
	{
		two = one + 1;
		while (two <= '8')
		{
			three = two + 1;
			while (three <= '9')
			{
				write(1, &one, 1);
				write(1, &two, 1);
				write(1, &three, 1);
				if (!(three == '9' && two == '8' && one == '7'))
					write(1, ", ", 2);
				three++;
			}
			two++;
		}
		one++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
