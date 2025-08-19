/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:58:22 by adal-kha          #+#    #+#             */
/*   Updated: 2025/08/02 00:38:00 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
	{
		result *= (nb - 1);
		nb--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(3));
// 	return (0);
// }
