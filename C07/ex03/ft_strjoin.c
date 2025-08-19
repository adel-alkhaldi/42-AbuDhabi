/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:04:42 by adal-kha          #+#    #+#             */
/*   Updated: 2025/08/04 19:05:24 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
		total += ft_strlen(strs[i++]);
	total += ft_strlen(sep) * (size - 1);
	return (total);
}

void	join_strings(char *arr, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[x++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				arr[x++] = sep[j++];
		}
		i++;
	}
	arr[x] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;

	if (size == 0)
	{
		arr = malloc(1);
		if (!arr)
			return (NULL);
		arr[0] = '\0';
		return (arr);
	}
	arr = malloc(get_total_size(size, strs, sep) + 1);
	if (!arr)
		return (NULL);
	join_strings(arr, size, strs, sep);
	return (arr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*result;
// 	char	*a[] = {"hello"};
// 	char	*b[] = {"hello", "world", "!"};
// 	char	*c[] = {"abc", "def", "ghi"};
// 	char	*d[] = {"", "", ""};
// 	char	*e[] = {"join", "this", "together"};

// 	result = ft_strjoin(0, NULL, ", ");
// 	printf("Test 0 (size == 0): %s\n", result);
// 	free(result);
// 	result = ft_strjoin(1, a, ", ");
// 	printf("Test 1 (one string): %s\n", result);
// 	free(result);
// 	result = ft_strjoin(3, b, " ");
// 	printf("Test 2 (space sep): %s\n", result);
// 	free(result);
// 	result = ft_strjoin(3, c, "");
// 	printf("Test 3 (empty sep): %s\n", result);
// 	free(result);
// 	result = ft_strjoin(3, d, "-");
// 	printf("Test 4 (empty strings): %s\n", result);
// 	free(result);
// 	result = ft_strjoin(3, e, ":3");
// 	printf("Test 5 (long sep): %s\n", result);
// 	free(result);
// 	return (0);
// }
