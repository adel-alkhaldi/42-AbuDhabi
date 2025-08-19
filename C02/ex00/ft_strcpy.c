/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:47:12 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/27 20:56:42 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <unistd.h>
// #include <stdio.h>
// int main (void)
// {
//     char src[] = "abc";
//     char dest[] = "x";
//     printf("String src:%s \n ", src);
//     printf("String dest:%s \n\n", dest);
//     ft_strcpy(dest, src);
//     printf("String src:%s \n ", src);
//     printf("String dest:%s \n\n", dest);
// }