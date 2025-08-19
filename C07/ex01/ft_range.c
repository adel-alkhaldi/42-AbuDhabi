/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 01:24:52 by adal-kha          #+#    #+#             */
/*   Updated: 2025/08/04 01:24:55 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (size));
	if (!(arr))
	{
		return (NULL);
	}
	while (i != size)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

// #include <unistd.h>
// int	main(void)
// {
// 	int	i;
// 	int	*t2;

// 	i = 0;
// 	t2 = ft_range(200, 300);
// 	while (i < 100)
// 	{
// 		printf("%d\n", t2[i]);
// 		i++;
// 	}
// 	return (0);
// }
