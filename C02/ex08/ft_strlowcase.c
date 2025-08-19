/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 00:30:38 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/27 21:02:30 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <unistd.h>
// int main (void) {
//     char str[] = "ATesTD";
//     printf("String Before:%s\n",str);
//     ft_strlowcase(str);
//     printf("String After:%s\n",str);
// }