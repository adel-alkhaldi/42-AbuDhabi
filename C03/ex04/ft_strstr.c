/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 02:01:25 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/28 03:28:27 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 22:50:00 by adal-kha          #+#    #+#             */
/*   Updated: 2025/07/27 22:50:00 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// printf("Begin Index:%d", begin); ADD BEFORE return (0) TO VERIFY
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "1234abcd356";
// 	char	to_find[] = "abcd";
// 	char	*temp;
// 	char	*temp2;
// 	temp = ft_strstr(str, to_find);
// 	printf("\n%s\n", temp);
// 	temp2 = strstr(str, to_find);
// 	printf("\n%s", temp);
// }
