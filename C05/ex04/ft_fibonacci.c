/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 01:12:28 by adal-kha          #+#    #+#             */
/*   Updated: 2025/08/01 22:19:28 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int	ft_fibonacci(int index);
// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(0));  // 0
// 	printf("%d\n", ft_fibonacci(1));  // 1
// 	printf("%d\n", ft_fibonacci(2));  // 1
// 	printf("%d\n", ft_fibonacci(5));  // 5
// 	printf("%d\n", ft_fibonacci(-2)); // -1
// }
