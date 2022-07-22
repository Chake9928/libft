/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:56:07 by okamototake       #+#    #+#             */
/*   Updated: 2022/07/18 15:51:35 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_ins_to_str(char *str, int n)
{
	size_t		i;
	int			flag;
	long		lnum;

	flag = 0;
	lnum = (long)n;
	if (lnum == 0)
		str[0] = '0';
	if (lnum < 0)
	{
		lnum *= -1;
		flag = 1;
	}
	i = 0;
	while (lnum)
	{
		str[i] = lnum % 10 + '0';
		lnum /= 10;
		i++;
	}
	if (flag == 1)
		str[i] = '-';
}

static void	ft_revstr(char *str)
{
	size_t	i;
	size_t	len;
	char	tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			s_len;

	s_len = get_len(n);
	str = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!str)
		return (NULL);
	str[s_len] = '\0';
	ft_ins_to_str(str, n);
	ft_revstr(str);
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-0));
// 	printf("%s\n", ft_itoa(+0));
// 	printf("%s\n", ft_itoa(1));
// 	printf("%s\n", ft_itoa(+1));
// 	printf("%s\n", ft_itoa(42));
// 	printf("%s\n", ft_itoa(+42));
// 	printf("%s\n", ft_itoa(-42));
// 	printf("%s\n", ft_itoa(2147483647));
// }

/*
flagを初期化せず、flag = 1の判定を行ったため、バグった。
*/

/*
char	*ft_itoa(int n)
{
	char			*str;
	size_t			s_len;

	s_len = get_len(n);
	str = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!str)
		return (NULL);
	str[s_len] = '\0';
	ft_ins_to_str(str, n);
	ft_revstr(str);
	return (str);
}
*/
