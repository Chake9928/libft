/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 07:21:17 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/16 19:21:02 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	char			*d_cpy;
// 	const char		*s_cpy;

// 	d_cpy = (char *)dst;
// 	s_cpy = (const char *)src;
// 	if (dst <= src)
// 		ft_memcpy(dst, src, len);
// 	else
// 	{
// 		while (len--)
// 			*(d_cpy + len) = *(s_cpy + len);
// 	}
// 	return (dst);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char	tmp[len + 1];

	i = 0;
	while (i < len)
	{
		tmp[i] = ((unsigned char *)src)[i];
		i++;
	}
	tmp[i] = '\0';
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}
