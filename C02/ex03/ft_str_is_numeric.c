/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:47:00 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/27 20:58:24 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	x;
	int	i;

	x = 1;
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
			x = 0;
		i++;
	}
	if (str[0] == '\0')
	{
		x = 1;
	}
	return (x);
}

// #include <stdio.h>
// int main (void) 
// {
//     char str[] = "12";
//     int x = ft_str_is_numeric(str);
//     printf("%d",x);
// }