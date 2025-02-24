/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarros <lbarros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:06:31 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/05 01:18:25 by lbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		if (str[i + j] != to_find[j])
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "up nao e carro";
// 	char	to_find[] = "nao";
// 	char	*resultado;

// 	resultado = ft_strstr(str, to_find);
// 	if (resultado != NULL)
// 		printf("econtrei: %s\n", resultado);
// 	else
// 		printf("encontrei nao pai\n");
// 	return (0);
// }