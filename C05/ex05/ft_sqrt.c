/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 02:31:10 by adal-kha          #+#    #+#             */
/*   Updated: 2025/08/01 22:19:26 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(0));  // 0
// 	printf("%d\n", ft_sqrt(1));  // 1
// 	printf("%d\n", ft_sqrt(4));  // 2
// 	printf("%d\n", ft_sqrt(9));  // 3
// 	printf("%d\n", ft_sqrt(10)); // 0
//     printf("%d\n", ft_sqrt(25)); // 5
// 	printf("%d\n", ft_sqrt(-1)); // 0
// }
