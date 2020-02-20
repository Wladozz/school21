/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:10:20 by lalbert           #+#    #+#             */
/*   Updated: 2020/02/20 17:14:46 by lalbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     find_common_string(char *str1, char *str2)
{
	    while (*str1 && *str2)
			    {
					        if(*str1 == *str2)
								            str1++;
							        str2++;
									    }
		    if(!(*str1))
				        return (1);
			    return (0);
}

int main(int ac, char **av)
{
	int i;

	if (ac == 3)
	{
		if (find_common_string(av[1], av[2]))
		{
			i = 0;
			while (av[1][i] != '\0')
				ft_putchar(av[1][i++]);
		}
	}
	ft_putchar('\n');
	return (0);
}
