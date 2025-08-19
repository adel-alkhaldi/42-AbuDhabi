/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 00:07:09 by adal-kha          #+#    #+#             */
/*   Updated: 2025/08/04 02:59:25 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*str;

	i = 0;
	if (!src)
	{
		return (NULL);
	}
	length = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
	{
		return (NULL);
	}
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <unistd.h>
// int	main(void)
// {
// 	char *test = "Testing";
// 	printf("%s\n", test);
// 	char *t2 = ft_strdup(test);
// 	printf("%s", t2);
// }