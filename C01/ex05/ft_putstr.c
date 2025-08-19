/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 22:03:32 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/23 22:08:43 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*(str) != '\0')
	{
		write(1, str++, 1);
	}
}

// int	main(void)
// {
// 	char message[] = "Welcome";

// 	ft_putstr(message);
// }
