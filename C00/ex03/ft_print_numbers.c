/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:03:19 by lbarros           #+#    #+#             */
/*   Updated: 2025/01/24 20:03:27 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_print_numbers(void);

 int	main(void)
{
	ft_print_numbers();
	return (0);
} */

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}
