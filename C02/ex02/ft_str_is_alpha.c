/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:45:39 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/04 18:59:13 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 'Z' || str[i] < 'A') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*string;
	int		printer;

	string = "LfLfL12fLf";
	printer = ft_str_is_alpha(string) + '0';
	write(1, &printer, 1);
}
