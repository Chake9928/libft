/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:34:20 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/13 18:18:11 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static int	ov_num(int sign)
{
	if (sign == 1)
		return ((int)LONG_MAX);
	else
		return ((int)LONG_MIN);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	num;

	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	num = 0;
	while (ft_isdigit(*str))
	{
		if (num > LONG_MAX / 10)
			return (ov_num(sign));
		if (num == LONG_MAX / 10 && LONG_MAX % 10 < (*str - '0'))
			return (ov_num(sign));
		num = 10 * num + (*str - '0');
		str++;
	}
	return ((int)(num * sign));
}
