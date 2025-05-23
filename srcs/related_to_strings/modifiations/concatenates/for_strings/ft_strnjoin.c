/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:26:24 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/23 00:51:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Creates a new string by concatenate n characters of 2 strings.
 * 
 * @param s1 The first sring.
 * @param n_s1 The number of bytes from s1 that will be joined.
 * @param s2 The second sring.
 * @param n_s2 The number of bytes from s2 that will be joined.
 * 
 * @return
 * The new joined string.
 * 
 * @note
 * The free of s1 and s2 is the responsibility of the user.
*/
char	*ft_strnjoin(char const *s1, size_t n_s1, char const *s2, size_t n_s2)
{
	char	*new_string;
	size_t	len;
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (n_s1 > ft_strlen(s1))
		n_s1 = ft_strlen(s1);
	if (n_s2 > ft_strlen(s2))
		n_s2 = ft_strlen(s2);
	len = n_s1 + n_s2 + 1;
	new_string = malloc(len);
	if (!new_string)
		return (NULL);
	while (s1 && s1[++i] != '\0' && i < n_s1)
		new_string[i] = s1[i];
	while (s2 && s2[j] != '\0' && j < n_s2)
		new_string[i++] = s2[j++];
	new_string[i] = '\0';
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