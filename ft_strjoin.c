/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 23:05:54 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/17 11:40:31 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len;
	ptr = (char *)malloc(sizeof(char) * (total_len + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, s1_len + 1);
	ft_strlcat(ptr, s2, total_len + 1);
	return (ptr);
}
