/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:49:38 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/13 15:12:55 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	if (!(*needle))
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

// char	*strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	while (*(haystack + i) != *needle)
// 	{
// 		i++;
// 	}
// 	while (*(haystack + j) == *(needle + j))
// 	{
// 		j++;
// 	}
// 	if (j + 1 == ft_strlen(needle))
// 	{
// 		return (&(*(haystack + j)));
// 	}
// 	return (NULL);
// }

// int	main(void)
// {
// 	char	haystack[] = "ASDFGHJKLZXCVBNM";
// 	char	needle[] = "GHJ";

// 	return (printf("%s", strnstr(haystack, needle, 7)));
// }
