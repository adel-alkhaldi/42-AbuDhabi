/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adal-kha <adal-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:36:07 by adal-kha          #+#    #+#             */
/*   Updated: 2025/08/01 23:46:43 by adal-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// I included argc - argc just a safety if
// the user inputted multiple stuff it still
// prints the program name
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[argc - argc][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
