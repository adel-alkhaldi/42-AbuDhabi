/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:47:20 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/27 20:58:54 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	x;
	int	i;

	x = 1;
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a') && (str[i] <= 'z')))
			x = 0;
		i++;
	}
	return (x);
}

// #include <stdio.h>
// int main (void) {
//     char str[] = "";
//     int x = ft_str_is_lowercase(str);
//     printf("%d\n",x);
// }