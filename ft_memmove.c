/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 07:21:17 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/22 13:08:50 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*d_cpy;
	const unsigned char		*s_cpy;

	d_cpy = (unsigned char *)dst;
	s_cpy = (unsigned char *)src;
	if (d_cpy == s_cpy || len == 0)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			*(d_cpy + len) = *(s_cpy + len);
	}
	return (dst);
}

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	size_t		i;
// 	char		tmp[len + 1];

// 	i = 0;
// 	while (i < len)
// 	{
// 		tmp[i] = ((unsigned char *)src)[i];
// 		i++;
// 	}
// 	tmp[i] = '\0';
// 	i = 0;
// 	while (i < len)
// 	{
// 		((unsigned char *)dst)[i] = tmp[i];
// 		i++;
// 	}
// 	return (dst);
// }
