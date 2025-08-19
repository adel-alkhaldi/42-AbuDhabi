/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:47:38 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/27 20:59:24 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	ft_str_is_printable(char *str);

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("Hello!"));      // 1
// 	printf("%d\n", ft_str_is_printable("Hi\nThere"));   // 0
// 	printf("%d\n", ft_str_is_printable(""));            // 1
// 	return (0);
// }
