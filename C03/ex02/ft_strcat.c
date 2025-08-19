/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 00:09:51 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/28 01:57:25 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
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
// 	char	src[] = "Testing";
// 	char	dest[30] = "Test ";

// 	printf("Before:\nsrc:%s\ndest:%s\n\n", src, dest);
// 	ft_strcat(dest, src);
// 	printf("After:\nsrc:%s\ndest:%s", src, dest);
// }