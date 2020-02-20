/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 11:30:14 by lalbert           #+#    #+#             */
/*   Updated: 2020/02/02 15:03:05 by lalbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y, char* left, char *middle)
{
	int hight;
	int width;

	hight = 0;
	while (hight++ < y)
	{
		width = 0;
		while (width++ < x)
		{
			if ((hight == 1 && width == 1) || (hight == y && width == x && x != 1 && y != 1))
				ft_putchar('A');
			else if ((hight == y && width == 1) || (hight == 1 && width == x))
				ft_putchar('C');
			else if ((hight == 1 || hight == y) || (width == 1 || width == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
