/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:34:20 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/16 19:11:22 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	over_max(int flag)
{
	if (flag == 1)
		return ((int)LONG_MAX);
	else
		return ((int)LONG_MIN);
}

static int	ft_isspace(int c)
{
	return (('\t' <= c && c <= '\r') || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	flag;
	long	num;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	flag = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	num = 0;
	while (ft_isdigit(str[i]))
	{
		if (num > LONG_MAX / 10)
			return (over_max(flag));
		if (num == LONG_MAX / 10 && LONG_MAX % 10 < (str[i] - '0'))
			return (over_max(flag));
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(num * flag));
}

// int main(void)
// {
// 	printf("%d\n", atoi("18446744073709551616"));
// 	printf("%d\n", ft_atoi("18446744073709551616"));
// 	printf("%d\n", (int)(LONG_MIN));
// 	printf("%d\n", (int)(LONG_MAX));
// 	return 0;
// }
