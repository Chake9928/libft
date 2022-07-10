/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:49:52 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/10 23:34:44 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s) + 1;
	i = 0;
	while (i < s_len)
	{
		if ((char *)(s + i) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
