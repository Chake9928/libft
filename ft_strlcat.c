/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 07:21:27 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/15 21:47:16 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(src);
	if (dstsize == 0)
		return (s_len);
	d_len = ft_strlen(dst);
	if (d_len >= dstsize)
		return (s_len + dstsize);
	i = 0;
	while (src[i] && i < dstsize - d_len -1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (s_len + d_len);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	dst_len;
// 	size_t	src_len;

// 	src_len = ft_strlen(src);
// 	if (dstsize == 0)
// 		return (src_len);
// 	dst_len = ft_strlen(dst);
// 	if (dst_len >= dstsize)
// 		return (src_len + dstsize);
// 	ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
// 	return (dst_len + src_len);
// }
