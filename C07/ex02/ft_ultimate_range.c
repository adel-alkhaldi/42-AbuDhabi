/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 01:24:19 by adal-kha          #+#    #+#             */
/*   Updated: 2025/08/04 01:24:22 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	arr = (int *)malloc(sizeof(int) * size);
	if (!(arr))
		return (-1);
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}

// int	main(void)
// {
// 	int *x;
// 	int i = 0;
// 	int z = ft_ultimate_range(&x, 200, 300);
// 	printf("Range of Ultimate Range:%i\n", z);
// 	while (i < 100)
// 	{
// 		printf("%d\n", (x[i]));
// 		i++;
// 	}
// }