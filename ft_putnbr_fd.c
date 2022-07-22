/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:16:55 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/17 11:39:57 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	unum;

	if (n < 0)
	{
		unum = (unsigned int)(n * -1);
		ft_putchar_fd('-', fd);
	}
	else
		unum = (unsigned int)n;
	if (unum >= 10)
	{
		ft_putnbr_fd(unum / 10, fd);
		ft_putnbr_fd(unum % 10, fd);
	}
	else
		ft_putchar_fd(unum + '0', fd);
}
