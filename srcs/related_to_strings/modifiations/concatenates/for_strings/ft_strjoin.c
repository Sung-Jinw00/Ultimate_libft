/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:26:24 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/23 16:30:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Creates a new string by concatenate 2 strings.
 * 
 * @param s1 The first sring.
 * @param s2 The second sring.
 * 
 * @return
 * The new joined string.
 * 
 * @note
 * The free of s1 and s2 is the responsibility of the user.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;

	new_string = ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_string)
		return (NULL);
	ft_strcpy(new_string, s1);
	ft_strcat(new_string, (char *)s2);
	return (new_string);
}

/* #include <stdio.h>

int	main(void)
{
	char *s1 = "Hello ";
	char *s2 = "World";

	s1 = ft_strjoin(s1, s2);
	printf("%s\n", s1);
	free(s1);
	return (0);
} */