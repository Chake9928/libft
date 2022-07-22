/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamototakeshi <okamototakeshi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:26:11 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/18 15:40:11 by okamototake      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_ptr_elems(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] && s[i] != c)
				i++;
			cnt++;
		}
	}
	return (cnt);
}

static void	free_all(char **ptr, size_t	i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(ptr[j]);
		j++;
	}
	free(ptr);
}

static char	**split_strs(char const *s, char c, char **ptr, size_t elem_cnt)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < elem_cnt)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		ptr[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!ptr[i])
		{
			free_all(ptr, i);
			return (NULL);
		}
		ft_strlcpy(ptr[i], s, len + 1);
		s += len;
		i++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	elem_cnt;

	if (!s)
		return (NULL);
	elem_cnt = count_ptr_elems(s, c);
	ptr = (char **)malloc(sizeof(char *) * (elem_cnt + 1));
	if (!ptr)
		return (NULL);
	ptr = split_strs(s, c, ptr, elem_cnt);
	if (!ptr)
		return (NULL);
	ptr[elem_cnt] = NULL;
	return (ptr);
}
