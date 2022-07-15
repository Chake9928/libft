/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 07:21:21 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/15 22:28:09 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;
	size_t	i;

	dst = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		dst[i] = (unsigned char)c;
		i++;
	}
	return (dst);
}

// void	*ft_memset(void *b, int c, size_t len)
// {
// 	while (len--)
// 	{
// 		*(unsigned char *)b++ = (unsigned char)c;
// 	}
// 	return (b);
// }


// void	*ft_memset(void *b, int c, size_t len)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < len)
// 		*(unsigned char *)(b + i++) = (unsigned char)c;
// 	return (b);
// }
