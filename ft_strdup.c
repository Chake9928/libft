/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:53:33 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/13 19:52:05 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1_size;
	char	*ptr;

	s1_size = ft_strlen(s1) + 1;
	ptr = (char *)malloc((s1_size) * sizeof(char));
	if (!(ptr))
		return (NULL);
	ft_strlcpy(ptr, s1, s1_size);
	return (ptr);
}
