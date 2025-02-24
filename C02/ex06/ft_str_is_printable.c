/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:44:47 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/02 17:46:40 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str == NULL)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	string[] = "lf";
// 	int		printer;

// 	printer = ft_str_is_printable(string) + '0';
// 	write(1, &printer, 1);
// }
