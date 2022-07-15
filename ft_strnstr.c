/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:49:38 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/15 22:55:36 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	n_len = ft_strlen(needle);
	while (*haystack && len >= n_len)
	{
		if (ft_strncmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
