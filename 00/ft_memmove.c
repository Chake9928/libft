/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 07:21:17 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/13 14:43:43 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			n;
	char			*d_cpy;
	const char		*s_cpy;

	d_cpy = (char *)dst;
	s_cpy = (const char *)src;
	if (dst <= src)
	{
		while (len--)
			*d_cpy++ = *s_cpy++;
	}
	else
	{
		while (len--)
			*(d_cpy + len) = (s_cpy + len);
	}
	return (dst);
}
