/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:07:38 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/27 20:57:37 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int main (void) {
//     char src[] = "testin";
//     char dest[] = "blablabla";
//     printf("Before: \n");
//     printf("Source: %s\n",src);
//     printf("Dest: %s\n\n",dest);
//     ft_strncpy(dest, src, 4);
//     printf("After: \n");
//     printf("Source: %s\n",src);
//     printf("Dest: %s\n\n",dest);
//     return (0);
// }