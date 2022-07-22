/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 07:21:12 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/22 13:05:21 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d_cpy;
	const char	*s_cpy;

	if (dst == src || n == 0)
		return (dst);
	d_cpy = (char *)dst;
	s_cpy = (const char *)src;
	while (n--)
		*d_cpy++ = *s_cpy++;
	return (dst);
}

// void	*memcpy(void *dest, const void *src, size_t len)
// {
// 	while (len--)
// 		*(char *)(dest++) = *(const char *)(src++);
// 	return (dest);
// }
