/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:25:35 by lalbert           #+#    #+#             */
/*   Updated: 2020/02/20 12:46:55 by lalbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		str_len(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char    *ft_strdup(char *src)
{
	char	*str_copy;
	int		i;

	i = 0;
	str_copy = (char *)malloc(str_len(src) + 1);
	if (str_copy)
	{
		while (src[i])
		{
			str_copy[i] = src[i];
			i++;
		}
	}
	str_copy[i] = '\0';
	return (str_copy);
}
