/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 21:44:12 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/23 22:01:24 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = 1;
	mod = 1;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 7;
// 	y = 5;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("%d \n", x);
// 	printf("%d \n", y);
// }
