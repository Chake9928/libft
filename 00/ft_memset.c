/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 07:21:21 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/08 21:04:46 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ub;

	ub = (unsigned char)b;
	while (len--)
		*ub++ = (unsigned char)c;
	return (b);
}

// void	*ft_memset(void *s, int c, size_t len)
// {
// 	while (len--)
// 		*(unsigned char *)s++ = (unsigned char)c;
// 	return (s);
// }
