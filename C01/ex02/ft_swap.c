/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:33:49 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/23 21:02:51 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	x = 5;
//     int	y = 10; //*y = &y
//     printf("%d ",x);
//     printf("%d ",y);
// 	printf("\n",y);
//     ft_swap(&x,&y);
//     printf("%d ",x);
//     printf("%d ",y);
//     return (0);
// }
