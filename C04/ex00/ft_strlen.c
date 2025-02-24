/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:51:24 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/08 21:16:33 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//int	main(void)
// {
// 	char	str[] = "lf lindo";
// 	int i = ft_strlen(str);
// 	printf("numero de caracteres %d\n", i);
// 	return 0;
// }