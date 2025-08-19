/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 01:54:15 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/28 02:05:44 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "Testing";
// 	char dest[30] = "Test ";

// 	printf("Before:\nsrc:%s\ndest:%s\n\n", src, dest);
// 	ft_strncat(dest, src, 2);
// 	printf("After:\nsrc:%s\ndest:%s", src, dest);
// }
