/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 21:13:04 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/23 21:36:54 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 7;
// 	b = 5;
// 	printf("%d %d %d %d", a, b, div, mod);
// 	printf("\n");
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d %d %d %d", a, b, div, mod);
// }
