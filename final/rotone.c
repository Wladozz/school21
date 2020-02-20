/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:10:23 by lalbert           #+#    #+#             */
/*   Updated: 2020/02/20 15:16:04 by lalbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || 
				(str[i] <= 'Z' && str[i] >= 'A'))
		{
			if (str[i] == 'z')
				write(1, "a", 1);
			else if (str[i] == 'Z')
				write(1, "A", 1);
			else
				ft_putchar(str[i] + 1);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
