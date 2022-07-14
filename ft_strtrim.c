/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takokamo <takokamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 23:01:55 by takokamo          #+#    #+#             */
/*   Updated: 2022/07/14 23:23:37 by takokamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_strtrim(char const *s1, char const *set)
{
    size_t    i;
    char    result;

    if (!s1)
        return (NULL);
	if (!set)
		return (ft_strdup(s1));
    while (s1 && ft_strchr(set, s1))
        s1++;
    i = ft_strlen(s1);
    while (i  > 0 && ft_strchr(set, s1[i - 1]))
        i--;
    result = (char)malloc(sizeof(char) * (i + 1));
    if (!result)
        return (NULL);
    ft_strlcpy(result, s1, i + 1);
    return (result);
}

// int    main(void)
// {
//     printf("%s", ft_strtrim("hello world", "abcdefgijklmnopqrstuvwxyz"));
// } 
