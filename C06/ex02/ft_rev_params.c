/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 01:03:58 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/10 12:12:11 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	b;

	b = argc -1;
	while (b > 0)
	{
		ft_putstr(argv[b]);
		b--;
	}
}
