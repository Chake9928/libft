/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:34:20 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/16 15:59:11 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (('\t' <= c && c <= '\r') || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	judge;
	int	num;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	judge = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			judge *= -1;
		i++;
	}
	num = 0;
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * judge);
}
