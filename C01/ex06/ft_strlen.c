/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 22:36:19 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/24 01:09:07 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <unistd.h>

// int ft_strlen(char *str)
// {
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         write(1, &str[i], 1);
//         i++;
//     }
//     return i;

// }

// int ft_strlen(char *str)
// {
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         write(1, &str[i], 1);
//         i++;
//     }
//     return i;

// }